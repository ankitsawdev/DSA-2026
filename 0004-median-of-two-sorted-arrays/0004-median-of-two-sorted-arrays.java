class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;

        int arr[] = new int[n + m];

        int i = 0;
        int j = 0;

        int k = 0;
        int N = m + n;
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                arr[k] = nums1[i];
                i++;

            } else {
                arr[k] = nums2[j];

                j++;
            }

            k++;
        }

        while (i < n) {
            arr[k++] = nums1[i++];

        }
        while (j < m) {
            arr[k++] = nums2[j++];
        }

        if (N % 2 == 0) {
            int idx = N / 2 - 1;
            int sum = arr[idx] + arr[idx + 1];
            return sum / 2.0;
        } else {
            return arr[N / 2];
        }

    }
}