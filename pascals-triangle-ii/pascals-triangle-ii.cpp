class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;   //Create a matrix for storing the ans
        int j=0;                   //for creating new incremented rows
        
        while(rowIndex >= 0){
            vector<int> temp(j + 1, 1);   //create a new array/vector and initialize it with 1
            for(int i = 1; i < temp.size() - 1; i++){         //this loop will run for rowIndex >=2 
                temp[i] = ans[j - 1][i - 1] + ans[j - 1][i];  //now we will not change the 1's at first and last
            }
            ans.push_back(temp);       
            rowIndex--;
            j++;
        }
        return ans[j - 1];      
    }
};