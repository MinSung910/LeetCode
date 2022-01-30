class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       for ( auto& r : image ) 
         {
           reverse( r.begin(), r.end() );
            for ( auto& v : r ) 
            {
                v ^= 1;
            }
        }
        
        return image;
    }
};