// vector<int> alternateNumbers(vector<int>&a) {
//     // Write your code here.
//     vector<int>pos;
//     vector<int>neg;
//     int n=a.size();
//     for(int i=0; i<n; i++){
//         if(a[i]>0){
//             pos.push_back(a[i]);
//         }
//         else{
//             neg.push_back(a[i]);
//         }
//     }
//     if(pos.size()>neg.size()){
//         for(int i=0; i<neg.size(); i++){
//             a[i*2]=pos[i];
//             a[i*2+1]=neg[i];
//         }
//         int index=neg.size()*2;
//         for(int i=neg.size() ; i<pos.size(); i++){
//             a[index]=pos[i];
//             index++;
//         }
//     }
//     else{
//         for(int i=0; i<pos.size(); i++){
//             a[i*2]=pos[i];
//             a[i*2+1]=neg[i];
//         }
//         int index=pos.size()*2;
//         for(int i=pos.size() ; i<neg.size(); i++){
//             a[index]=neg[i];
//             index++;
//         }
        
//     }
//     return a;
// }

// Optimal
// vector<int> alternateNumbers(vector<int>&a) {
//     // Write your code here.
//        int n= a.size();
//         int posIndex=0 , negIndex=1;
//         vector<int>ans(n,0);
//         for(int i=0; i<n; i++){
//            if(a[i]>0){
//                ans[posIndex]=a[i];
//                posIndex=posIndex+2;
//            }
//            else{
//                ans[negIndex]=a[i];
//                negIndex=negIndex+2;
//            }
//         }
//         return ans;
// }

// Brute***
// vector<int> alternateNumbers(vector<int>&a) {
//     // Write your code here.
//     int n=a.size();
//     vector<int>pos;
//     vector<int>neg;
//     for(int i=0;i<n; i++){
//         if(a[i]>0){
//             pos.push_back(a[i]);
//         }
//         else 
//         neg.push_back(a[i]);
//     }
//     for(int i=0; i<n/2; i++){
//         a[i*2]=pos[i];
//         a[i*2+1]=neg[i];
//     }
//     return a;
// }
