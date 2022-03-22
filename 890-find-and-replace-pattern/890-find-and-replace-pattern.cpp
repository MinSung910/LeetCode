class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pat) {
        vector<string> ans;
        for(auto &str : words){
            unordered_set<char> st;
            unordered_map<char,char> mp;
            
            if(pat.size() != str.size()) continue;
            
            bool flag = true;
            for(int i=0;i<pat.size();i++){
                if(mp.find(pat[i]) != mp.end()){
                    if(mp[pat[i]] != str[i]){
                        flag = false;
                        break;
                    }
                }else{
                    if(st.find(str[i]) != st.end()){
                        flag = false;
                        break;
                    }
                    st.insert(str[i]);
                    mp[pat[i]] = str[i];
                }
            }
            if(flag) ans.push_back(str);
        }
        return ans;
    }
};