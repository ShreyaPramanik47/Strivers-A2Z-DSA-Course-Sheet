 // LEETCODE
class Solution {
public:
    int fib(int n) {
       if(n<=1){
           return n;
       } 
       int last=fib(n-1);
       int slast=fib(n-2);
       return last+slast;
       
    }
};

// GFG
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>ans;
        long long first=0;
        long long secnd =1;
        long long finalnum;
        ans.push_back(1);
        for(int i=1; i<n; i++){
            finalnum=first+secnd;
            first=secnd;
            secnd=finalnum;
            ans.push_back(finalnum);
        }
        return ans;
    }
};
