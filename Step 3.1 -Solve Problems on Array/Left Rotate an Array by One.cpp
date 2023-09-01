#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    vector<int>ans;
    for(int i=1; i<n; i++){
        ans.push_back(arr[i]);
    }
    ans.push_back(arr[0]);
    return ans;
}

// T.C - O(N);


#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
