class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for(int i=0;i<nums.size();i++){
            int ele = nums[i];
            elementSum += ele;

            while(ele){
                digitSum += ele%10;
                ele/=10;
            }
        }

        return abs(elementSum - digitSum);
    }
};