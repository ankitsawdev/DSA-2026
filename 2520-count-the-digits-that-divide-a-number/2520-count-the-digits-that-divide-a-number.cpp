class Solution {
public:
    int countDigits(int num) {
        int ans = 0;

        int copy = num;
        while(copy){
            int digit  = copy%10;
            if(digit !=0)
            if(num%digit==0) ans++;
            copy/=10;
        }
        return ans;
    }
};