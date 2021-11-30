class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
    int size = nums.size();
        
        int i = 0;
        int max_val = nums[0];
        int min_val = nums[0];
        int ans = 1;
            
        
        for (int j = 1; j < size; j++) {
            max_val = max(max_val, nums[j]);
            min_val = min(min_val, nums[j]);
                    
            if (max_val - min_val <= limit) {
                ans = max(j - i + 1, ans);
            }
            
            else {
                i++;
                
                if (nums[i - 1] == max_val || nums[i-1] == min_val) {
                    max_val = nums[i];
                    min_val = nums[i];
                    
                    for (int k = i; k <= j; k++) {
                        max_val = max(max_val, nums[k]);
                        min_val = min(min_val, nums[k]);    
                    }
                }
            }
        }
        
        return ans;
        

        
        //         int size = nums.size();
//         int ans = -1;
        
//         for (int i = 0; i < size; i++){
//             int max_val = nums[i];
//             int min_val = nums[i];
            
//             for (int j = i; j < size; j++){
//                 max_val = max(max_val, nums[j]);
//                 min_val = min(min_val, nums[j]);
                    
//                 if (max_val - min_val <= limit) {
//                     ans = max(j - i + 1, ans);
//                 }
                
//                 else {
//                     break;
//                 }
//             }    
//         }
        
//         return ans;
    }
};