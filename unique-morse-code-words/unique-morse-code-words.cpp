class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		vector<string> morse = {
			".-","-...","-.-.","-..",".","..-.",
			"--.","....","..",".---","-.-",".-..",
			"--","-.","---",".--.","--.-",".-.","...",
			"-","..-","...-",".--","-..-","-.--","--.."
		};

		unordered_set<string> set;
		for (auto& word : words) {
			string str = "";
			for (auto& c : word) {
				str += morse[c - 'a'];
			}
			set.insert(str);
		}
		return set.size();
	}
};