class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int cnt = 0;
        vector<int> tmp;
        tmp.push_back(a);
        tmp.push_back(b);
        tmp.push_back(c);
        
        while (1) {
            sort(tmp.begin(), tmp.end());
            
            int max = tmp[2];
            int s_max = tmp[1];
            
            if (max == 0 || s_max == 0) break;
            
            tmp[2]--;
            tmp[1]--;
            cnt++;
        }
        return cnt;
    }
};