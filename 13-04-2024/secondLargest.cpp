#include<bits/stdc++.h>
using namespace std ; 
int secondLargest(vector<int> &arr){
    sort(arr.begin() ,  arr.end());
    return arr[arr.size()-2] ;

}
int secondSmallest(vector<int> &arr){
    sort(arr.begin() ,  arr.end());
    return arr[1] ;

} 

int main(){
    vector<int> arr1 = {1,2,3,4,5} ;
    vector<int> arr2 = {4,3,5,6,8};
    cout <<"second largest number of arr1 is "<< secondLargest(arr1)<< endl ;
    cout <<"second smallest number of arr1 is "<< secondSmallest(arr1)<< endl ;

    return 0 ; 
}

//brute force
//o(n logn)
//space o(n)