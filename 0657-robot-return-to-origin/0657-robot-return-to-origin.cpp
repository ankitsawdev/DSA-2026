class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int, int> p(0, 0);

        for (char ch : moves) {
            if (ch == 'L') {
                p.first--;
            } else if (ch == 'R') {
                p.first++;
            } else if (ch == 'U') {
                p.second--;
            } else {
                p.second++;
            }
        }

        if (p.first == 0 && p.second == 0)
            return true;
        else
            return false;
    }
};