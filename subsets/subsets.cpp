class Solution {
public: 
   void recurFunc(int index,vector<int>&nums,vector<vector<int>>&vec,vector<int>&v){
        if(index == nums.size()){
            vec.push_back(v);
            v.pop_back();
            return;
        }
        v.push_back(nums[index]);
        recurFunc(index+1,nums,vec,v);
        recurFunc(index+1,nums,vec,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>v;
        recurFunc(0,nums,vec,v);
        return vec;
    }
};