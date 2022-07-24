class Solution {
public:
    string countAndSay(int n) {
        
        string s = "1";
        
        for(int i = 1; i < n; i++) {
            s = Next_number(s);
        }
        return s;
        
    }
    string Next_number(string &s) {
        string res = "";
        for(int i = 0; i < s.length(); i++) {
            int cnt = 1;
            
            while(i + 1 < s.length() && s[i]==s[i+1]) {
                ++i, ++cnt;
            }
            res += to_string(cnt) + s[i];
        }
        return res;
    }
};
