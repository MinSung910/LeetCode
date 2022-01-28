class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        
        for (string& op : ops) {
            if (op.compare("C") == 0) {
                v.pop_back();
            }
            else if (op.compare("D") == 0) {
                v.push_back(v.back() * 2);
            }
            else if (op.compare("+") == 0) {
                int a = v.back();
                v.pop_back();
                int b = v.back();
                v.push_back(a);
                v.push_back(a + b);
            }
            else {
                v.push_back(stoi(op));
            }
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};