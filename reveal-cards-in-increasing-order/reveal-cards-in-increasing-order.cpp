class Solution {
public:
	vector<int> deckRevealedIncreasing(vector<int>& deck) {
		sort(deck.begin(), deck.end(), greater<int>());
		deque<int>dq;
		dq.push_back(deck[0]);           
        
		for (int i = 1; i < deck.size(); i++) {
			dq.push_front(dq.back());   //moving back card to top;
			dq.pop_back();
			dq.push_front(deck[i]);    //taking new card on top.
		}
		vector<int>answer(dq.begin(), dq.end());
		return answer;
	}
};