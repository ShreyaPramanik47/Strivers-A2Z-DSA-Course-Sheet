// Leetcode
class Solution {
public:
    bool isPalindrome(string s) {
        
        string t="";
        
        for(char x:s){
            if(isalpha(x) || isdigit(x))
            t+=tolower(x);
        }
        
        string g=t;
        reverse(g.begin(),g.end());
        
        if(g!=t){
            return false;
        }
        return true;
    }
};


// GFG
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int start = 0;
	    int end = S.size()-1;
	    while(start<end){
	        if(S[start]==S[end]){
	            start++;
	            end--;
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	}

};
