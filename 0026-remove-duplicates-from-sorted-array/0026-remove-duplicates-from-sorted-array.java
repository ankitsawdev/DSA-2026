class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;

        int idx = 0;

        for(int i = 1;i<n;i++){
            if(nums[idx] != nums[i]){
                nums[++idx]=nums[i];
            }
        }
        return idx+1;

       

    }
}

/*

1 1 2
arr[0]=1
arr
idx = 0


 */