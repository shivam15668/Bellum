/* Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.

Example 2:
Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
Output: {4,5,6,7,1,2,3}
Explanation: Rotate the array to right by 3 elements.*/
#include<bits/stdc++.h>
using namespace std ; 
int main(){
    vector<int> arr1 = {1,2,3,4,5} ;
    int n  = 5 ; 
    int k = 2 ; 
    for( int i  = k ; i<= n-1 ; i++){
        cout << arr1[i] << " " ; 
    }
    for( int i = 0 ; i< n-k-1 ; i++){
        cout << arr1[i] << " " ; 
    }

    return 0 ; 
}
