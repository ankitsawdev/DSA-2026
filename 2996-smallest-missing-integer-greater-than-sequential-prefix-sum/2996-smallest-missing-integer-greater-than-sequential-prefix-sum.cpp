class Solution {
public:
    int missingInteger(vector<int>& nums) {

        // Find sum of longest sequential prefix
        int sum = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }

        // Store all elements for O(1) average lookup
        unordered_set<int> st(nums.begin(), nums.end());

        // Find smallest missing number >= sum
        while(st.find(sum) != st.end()) {
            sum++;
        }

        return sum;
    }
};