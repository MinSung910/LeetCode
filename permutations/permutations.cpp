class Solution {
public:
    vector<vector<int>> permute(const vector<int>& nums, int end) {
        if (end == 0) {
            vector<vector<int>> ret;
            vector<int> vec = {nums[0]};
            ret.push_back(vec);
            return ret;
        }
        
        vector<vector<int>> ret;
        vector<vector<int>> pre = permute(nums, end - 1);
        
        for(auto& v : pre) {
            for (int i = 0; i <= v.size(); i++) {
                vector<int> vec;
                
                for(auto& val : v) {
                    if (vec.size() == i) {
                       vec.push_back(nums[end]); 
                    }
                    
                    vec.push_back(val);    
                }
                
                if (i == v.size()) {
                    vec.push_back(nums[end]);
                }

                ret.push_back(vec);    
            }            
        }
        
        return ret;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        return permute(nums, nums.size() - 1);
    }
};