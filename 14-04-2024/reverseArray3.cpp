// Recursive approach 
// we'll do this with start and end index .
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void printArray(int arr[] , int n ){
    cout<<"The reversed array is:- "<<endl ;
    for(int i = 0 ; i<n ; i++){
        cout << arr[i]<<" " ; 
    }
}
void reverseArray(int arr[] , int start , int end){
    if(start<end){
        swap(arr[start] , arr[end]) ; 
        reverseArray(arr, start+1 , end-1) ; 
    }
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int n  = sizeof(arr1)/sizeof(arr1[0]) ; 
    reverseArray(arr1, 0 , n-1) ; 
    printArray(arr1, n) ;

    return 0 ;  
}
// time complexity = 0(n)
//space = 0(1)