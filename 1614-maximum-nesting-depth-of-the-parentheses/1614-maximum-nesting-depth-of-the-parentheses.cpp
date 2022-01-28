
class Solution {
public:
	int maxDepth(string s) {
		int current=0,max=0;
        int j=0;
        
        while(s[j]!='\0')
        {
            if(s[j] == '(')
                current++;
            else if (s[j] == ')')
            {
                if(current>max)
                    max=current;
                current--;
            }
            j++;
        }
        
        return max;
	}
};