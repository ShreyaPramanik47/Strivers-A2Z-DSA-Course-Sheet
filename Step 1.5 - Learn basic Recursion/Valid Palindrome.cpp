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

// LEETCODE
