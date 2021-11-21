class Solution {
public:
    int romanToInt(string s) {
        int I = 0, X = 0, C = 0;
        int ans = 0;
        
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == 'M') {
                if (C != 0) {
                    ans += 1000 - 2 * (C * 100);
                    C = 0;
                } else { 
                    ans += 1000;
                }
            }
            else if (s[i] == 'D') {
                if (C != 0) {
                    ans += 500 - 2 * (C * 100);
                    C = 0;
                } else { 
                    ans += 500;
                }
            }
            else if (s[i] == 'C') {
                C++;
                if (X != 0) {
                    ans += 100 - 2 * (X * 10);
                    X = 0;
                } else { 
                    ans += 100;
                }
            }
            else if (s[i] == 'L') {
                if (X != 0) {
                    ans += 50 - 2 * (X * 10);
                    X = 0;
                } else { 
                    ans += 50;
                }
            }
            else if (s[i] == 'X') {
                X++;
                if (I != 0) {
                    ans += 10 - 2 *(I * 1); 
                    I = 0;
                } else {
                    ans += 10;
                }
            }
            else if (s[i] == 'V') {
                if (I != 0) {
                    ans += 5 - 2 * (I * 1); 
                    I = 0;
                } else {
                    ans += 5;
                }
            }
            else if (s[i] == 'I') {
                I++;
                ans += 1;
            }
        }
        return ans;
    }
};