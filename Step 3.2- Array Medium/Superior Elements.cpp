// vector<int> superiorElements(vector<int>&a) {
//     // Write your code here.
//     vector<int>ans;
//     int n=a.size();
//     for(int i=0; i<n; i++){
//        bool leader = true;
//        for(int j=i+1; j<n; j++){
//            if(a[j]>a[i]){
//                leader=false;
//                break;
//            }
//        }
//        if(leader==true){
//            ans.push_back(a[i]);
//        }
//     }
// }


// Optimal****
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    int maxi=INT_MIN;
    vector<int>ans;
    for(int i=n-1; i>=0; i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        // keep track of right max
        maxi=max(maxi,a[i]);
    }
    return ans;
}
