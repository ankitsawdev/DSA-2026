class Solution {
public:
    bool isValid(string curr) {
        int sum = 0;
        for (char ch : curr) {
            if (ch == '(')
                sum++;
            else
                sum--;
            if (sum < 0)
                return false;
        }
        return sum == 0;
    }
    void generate(string curr, int n, int length, vector<string>& result) {
        if (length == 2 * n) {
            if (isValid(curr)) {
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        generate(curr, n, length + 1, result);
        curr.pop_back();
        curr.push_back(')');
        generate(curr, n, length + 1, result);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate("", n, 0, result);
        return result;
    }
};