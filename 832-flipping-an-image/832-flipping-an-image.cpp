class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       for ( auto& r : image ) 
         {
            for ( auto& v : r ) 
            {
                v ^= 1;
            }
           reverse( r.begin(), r.end() );
        }
        
        return image;
    }
};