#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int arr1[] = {1,3,53,6,2,4} ; 
    int n  = 6 ; 
    double sum = 0 ; 
    for( int i = 0 ; i< n ; i++){
        sum+= double(arr1[i]) ; 
    }
    double average = (sum/n) ; 

    cout << (average) ; 
    return 0 ; 
}