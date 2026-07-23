class Solution {
public:
    pair<int,int> extract(string s){
        int pos = s.find('+');
        int a = stoi(s.substr(0,pos));
        int b = stoi(s.substr(pos+1,s.length() - pos-2));
        return {a,b};
    }
    string complexNumberMultiply(string num1, string num2) {
        
        auto [a,b] = extract(num1);
        auto [c,d] = extract(num2);

        int real = (a*c-b*d);
        int imag = (b*c + a*d);

        return to_string(real) + "+" + to_string(imag) + "i";

    }
};