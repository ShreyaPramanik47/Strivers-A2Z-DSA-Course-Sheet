string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int low=0;
    int high=book.size()-1;
    sort(book.begin(), book.end());
    while(low<=high){
        int sum=book[low]+book[high];
        if(sum>target){
            high--;
        }
        else if(sum<target){
            low++;
        }
        else{
            return "YES";
        }
    }
    return "NO";
}
