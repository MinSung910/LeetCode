class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> s;
        int cnt = 0;
        
        for (int i = 0; i < students.size(); i++) {
            q.push(students[i]);
        }
        for (int i = sandwiches.size() - 1; i >= 0; i--) {
            s.push(sandwiches[i]);
        }
        
        while(1) {
            int front = q.front();
            
            if (q.front() == s.top()) {
                q.pop();
                s.pop();
                cnt = 0;
            }
            else if (q.front() != s.top()) {
                	q.pop();
				q.push(front);
                cnt++;
            }
            if (cnt == q.size()) {
                break;
            }
        }
        return q.size();
    }
};