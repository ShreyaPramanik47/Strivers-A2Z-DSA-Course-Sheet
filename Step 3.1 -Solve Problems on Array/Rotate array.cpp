vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        temp[((i+n)-k)%n]=arr[i];
    }
    arr=temp;
    return arr;
    

    // vector<int>temp;
    // int n=arr.size();
    // for(int i=k; i<n; i++){
    //     int element=arr[i];
    //     temp.push_back(element);        
    // }
    // for(int i=0; i<k; i++){
    //     temp.push_back(arr[i]);
    // }
    // return temp;
}
