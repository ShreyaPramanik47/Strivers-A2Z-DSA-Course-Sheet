void sort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int j=0; j<=n-2; j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    sort(arr,n-1);
}

void bubbleSort(int arr[], int n) 
{
    //write your code here
   return sort(arr,n);
    
}
