// GFG

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string ni= to_string(n);
		    int start = 0;
		    int end= ni.size()-1;
		    while(start<end){
		        if(ni[start]==ni[end]){
		             start++;
		             end--;
		        }
		        else{
		            return "No";
		        }
		 
		    }
		    return "Yes";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends




// LEETCODE
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
      long long ans=0;
      int num=x;
      while(num!=0){
          int digit = num%10;
           ans = (ans*10)+digit;
          num = num/10;
      }
      if(ans==x){
          return 1;
      }
      return 0;
    }
};

