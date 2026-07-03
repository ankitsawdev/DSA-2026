class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int first  = 0;
        int second = 0;

        for(int i =0;i<nums.size();i++){
            if(nums[i]>9){
                second += nums[i];
            }
            else{
                first += nums[i];
            }
        }

       return first != second;
    }
};