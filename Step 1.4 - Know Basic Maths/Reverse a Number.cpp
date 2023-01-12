// LEETCODE
class Solution {
public:
    int reverse(int x) {
        int num=x;
        long long ans=0;
      while(num!=0){
         int digit = num%10;
          ans = (ans*10)+digit;
          if(ans>=INT_MAX || ans<=INT_MIN){
              return 0;
          }
          num=num/10;

      }  
      return ans;
    }
};
