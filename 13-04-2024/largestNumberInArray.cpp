#include<bits/stdc++.h>
using namespace std; 
int sortArr(vector<int>&arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() -1] ; 
}

int main(){
    vector<int>arr1 = {1,2,3,4,5};
    vector<int>arr2 = {6,7,8,9,10};
    cout<<"largest element in arr1 is "<< sortArr(arr1)<<endl; 
    cout<<"largest element in arr2 is "<< sortArr(arr2)<<endl; 
    return 0 ; 


}

//complexity 0(n logn)
//space 0(n)