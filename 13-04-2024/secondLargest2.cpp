#include<bits/stdc++.h>
using namespace std ; 
void getElement(int arr[] , int n ){
    if(n==0 || n==1){
        cout << -1 << " "<< -1 << endl ; 
    }
    sort(arr, arr+n);
    cout << "second largest is " <<arr[n-2] << endl ;
    cout <<  "second smallest is " <<arr[1] ; 
}

int main(){
    int arr1[] = {1,2,4,6,7,3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    getElement(arr1,n);
    return 0 ; 
}

// brute force
// complexity = o( nlogn)
//space order(N)