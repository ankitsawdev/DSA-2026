#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    void generateBinary(int k, string curr,vector<string>& ans){
        if(curr.length()==k){
            ans.push_back(curr);
            return;
        }

        generateBinary(k,curr+'0',ans);
        generateBinary(k,curr+'1',ans);
    }


    bool hasAllCodes(string s, int k) {
        vector<string> ans;
        generateBinary(k,"",ans);

        cout<<"Printing the all codes :"<<endl;
        for(string str : ans){
            cout<<str<<" ";
        }
        cout<<endl;

        for(string str : ans){
            if(!s.find(str)){
                return false;
            }
        }

        return true;
    }
};
int main()
{
Solution obj;
cout<<obj.hasAllCodes("00110110",2);

return 0;
}

