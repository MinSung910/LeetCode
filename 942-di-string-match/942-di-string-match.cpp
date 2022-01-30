class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> ans;
        int left = 0, right = n;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'I')
                ans.push_back(left++);
            else
                ans.push_back(right--);
        }
        ans.push_back(right);
        return ans;
    }
};