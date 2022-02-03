class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        if (q.size() == 0) {
            q.push(t);
            return 1;
        }
        
        int idx = 0;
		int qSize = q.size();
		while (idx < qSize) {
			int front = q.front();
			q.pop();
			if (front >= t - 3000) {
				q.push(front);
			}
			idx++;
		}
		q.push(t);
		return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */