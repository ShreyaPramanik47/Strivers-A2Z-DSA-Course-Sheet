// CODESTUDIO
int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0; i<(n-2); i++){
        if(a[i]>a[i+1]){
            return 0;
        }
    }
    return 1;
}
// T.C = O(N)
// S.C = O(1)

 
// LEETCODE - 1752. Check if Array Is Sorted and Rotated
class Solution {
public:
    bool check(vector<int>& nums) {
        int i, j;
        for(i=1 ; i<nums.size() ; i++)
        {
            if(nums[i]>=nums[i-1])
                continue;
            else if(nums[i]<nums[i-1])
            {
                if(nums[i]>nums[0])
                    return false;
                for(j=i+1 ; j<nums.size() ; j++)
                {
                    if(nums[j]>=nums[j-1] && nums[j]<=nums[0])
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
