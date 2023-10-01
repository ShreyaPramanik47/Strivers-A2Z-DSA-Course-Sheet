#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
    int temp=0;
    for(int i=0; i<arr.size(); i++){
        temp^=arr[i];
    }	
    return temp;
}
