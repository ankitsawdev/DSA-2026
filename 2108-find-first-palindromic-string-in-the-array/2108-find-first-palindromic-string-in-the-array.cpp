class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        

        for(string word : words){
            string temp = word;
            reverse(temp.begin(),temp.end());
            if(word == temp){
                return word;
            }
        }
        return "";
    }
};