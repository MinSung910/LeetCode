class Solution {
public:
    bool isAnagram(string s, string t) {
        int a = s.length();
        int b = t.length();
        
        if(a!=b)
            return false;
        
        int count[256]={0};
        
        for(int i=0;i<a;i++)
            count[s[i]]++;
        
        for(int i=0;i<b;i++)
            count[t[i]]--;
        
        for(int i=0;i<256;i++){
            if(count[i]!=0)
                return false;
        }
        return true;
    }
};