void rotate(vector<int> &arr, int n, int d) {

    reverse(arr.begin(),arr.begin()+d);

    reverse(arr.begin()+d,arr.begin()+n);

    reverse(arr.begin(),arr.begin()+n);

}

vector<int> rotateArray(vector<int>arr, int k) {

    rotate(arr,arr.size(),k);

    return arr;

}
