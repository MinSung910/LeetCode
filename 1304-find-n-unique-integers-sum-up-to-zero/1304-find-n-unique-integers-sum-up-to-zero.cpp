class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n, 0);
    
        int num = -(n / 2);
        int idx = 0;
        
        while (idx < n) {
            if (n % 2 == 0 && num == 0) num++; 
            ans[idx++] = num++;
        }
        return ans;
    }
};