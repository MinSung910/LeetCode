class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) {
            return 1;
        }
        
        
        for (long i = 0; i < x; i++) {
            if (x >= i * i &&  x < (i + 1) * (i + 1)){
                return i;
            }
            else if (x == (i + 1) * (i * 1)) {
                return i + 1;
            }
        }
        return  0;
    }
};