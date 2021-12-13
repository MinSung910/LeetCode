class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 1 || x == 1 || x == 0) {
            return x;
        }
        
        if (n == 0) {
            return 1;
        }
        
        if (n < 0) {
            return myPow(1.0 / x, -n);
        }
     

        if (n % 2 == 0) {
            double ret = myPow(x, n / 2);
            return ret * ret;
        }
        else {
            double ret = myPow(x, (n - 1) / 2);
            return ret * ret * x;    
        }
    }
};