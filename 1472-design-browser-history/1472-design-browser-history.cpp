class BrowserHistory {
public:
    vector<string> v;
    int cur;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        cur = 0;
    }
    
    void visit(string url) {
        if (cur == v.size() - 1) {
            cur++;
            v.push_back(url);
        }
        else {
            for (int i = v.size() - 1; i > cur; i--){
                v.pop_back();
            }
            v.push_back(url);
            cur++;
        }
    }
    
    string back(int steps) {
        if (cur - steps >= 0) {
            cur -= steps;
            return v[cur];
        }  
        else {
            cur = 0;
            return v[0];
        }
    }
    
    string forward(int steps) {
        if (cur + steps <= v.size() - 1) {
            cur += steps;
            return v[cur];
        }  
        else {
            cur = v.size() - 1;
            return v[v.size() - 1];
        }
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */