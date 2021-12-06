/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
	int guessNumber(int n) {
		int result = guess(n);
		if (result == 1) {
			while (guess(n)) {
				n++;
			}
		}
		else if (result == -1) {
			while (guess(n)) {
				n--;
			}
		}
		return n;
	}
};