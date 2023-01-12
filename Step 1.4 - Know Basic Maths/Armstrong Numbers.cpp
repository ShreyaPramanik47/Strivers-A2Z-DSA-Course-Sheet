// GFG
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int nm=n;
        int ans =0;
        while(nm!=0){
            int digit = nm%10;
            ans = ans+ (digit*digit*digit);
            nm=nm/10;
        }
       if(ans==n){
           return "Yes";
       }
       return "No";
    }
};
// LEETCODE
// I don't have Leetcode Premium 😞
