string findCommonString(string left , string right){

    int n = min(left.length() , right.length()) ;

    for(int i = 0 ; i < n ; i++){

        if(left.at(i) != right.at(i)){

            return left.substr(0,i);

        }

    }

    return left.substr(0 , n);

}

 

string largestCommonPrefix(vector<string> &arr , int left , int right){

    if(left == right){

        return arr[left];

    }

    int mid = (left + right) >> 1 ;

    string leftCommonString = largestCommonPrefix(arr ,left , mid);

    string rightCommonString = largestCommonPrefix(arr , mid+1 , right);

    return findCommonString(leftCommonString , rightCommonString);

}

 

string commonPrefix(vector<string>& arr, int n) {

    string ans = largestCommonPrefix(arr , 0 , n-1);

    return ans == "" ? "-1" : ans ;

}
