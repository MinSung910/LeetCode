class Solution {
public:
    unordered_map<int, int> map;
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;
        
        if (map.find(n) != map.end()) {
		    return map[n];
	    }

	    return map[n] = tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
    }
};