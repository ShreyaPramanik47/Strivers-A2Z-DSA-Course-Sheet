vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j=0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

