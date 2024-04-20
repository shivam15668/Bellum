/*Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 11
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11*/
#include<bits/stdc++.h>
using namespace std ; 
int sumOfElements(vector<int>&arr, int n ){
    int sum = 0 ; 
    for( int i  = 0 ; i< n ; i++){
        sum += (arr[i]) ; 
    }
    cout<< "sum of all elements is" <<" "<< sum << endl ;
    
    return 0 ; 
}

int main(){
    vector<int> arr1 = {1,2,4,5,2,5} ; 
    int n  = 6 ; //sizeof(arr1)/sizeof(arr1[0]) ; 
    //cout << sizeof(arr1[0]) ; // dont use , compiler problem
    sumOfElements(arr1 , n ) ; 
    return 0; 
}