class BrowserHistory {
public:
	stack<string> history;
	stack<string> memory;

	BrowserHistory(string homepage) {
		history.push(homepage);
	}

	void visit(string url) {
		history.push(url);
		while (!memory.empty()) {
			memory.pop();
		}
	}

	string back(int steps) {
		if (history.size() > steps) {
			while (steps--) {
				memory.push(history.top());
				history.pop();
			}
			return history.top();
		}
		else {
			while (history.size() != 1) {
				memory.push(history.top());
				history.pop();
			}
			return history.top();
		}
	}

		string forward(int steps) {
		if (memory.size() > steps) {
			while (steps--) {
				history.push(memory.top());
				memory.pop();
			}
			return history.top();
		}
		else {
			while (!memory.empty()) {
				history.push(memory.top());
				memory.pop();
			}
			return history.top();
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