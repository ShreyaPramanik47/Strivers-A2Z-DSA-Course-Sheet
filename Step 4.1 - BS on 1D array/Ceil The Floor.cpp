pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	sort(arr, arr+n);

int i=0, j=n-1;

while(i<=j){

int mid = (i+j)/2;

if(arr[mid] == x) return {x, x};

else if(arr[mid] > x) j=mid-1;

else i=mid+1;

}

return {j<0?-1:arr[j], i>=n?-1:arr[i]};
}
