#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int>&arr){
     sort(arr.begin(), arr.end());
     return(arr[0]);
}
int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {6,7,8,9,10};
    cout<<"The smallest number in arr1 is "<< sortArr(arr1)<<endl;
    cout<<"The smallest number in arr2 is "<< sortArr(arr2)<<endl;
    return 0 ;
    
}

// Brute force approach 

// complexity  = O(n*log(N))
//space = O(n)