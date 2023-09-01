int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for(int i=0;i<n; i++){
        if(arr[i]==num){
            int ans=i;
            return ans;
        }
    }
    return -1;
   
}
