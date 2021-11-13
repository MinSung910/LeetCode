class Solution {
public:
    int balancedStringSplit(string s) {
        int lCnt = 0;
        int rCnt = 0;
        int ans = 0;
        
        for (auto& c: s){
            if (c == 'R'){
                rCnt++;
            }
            else{
                lCnt++;
            }
            if (lCnt == rCnt){
                ans++;
            }
        }
        return ans;
    }
};