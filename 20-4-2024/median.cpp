#include<bits/stdc++.h>
using namespace std ; 
int medianElement(vector<int>&arr , int n ){
    sort(arr.begin() , arr.end()) ; 
    if(n%2 != 0 ){
        cout<< "median is " << arr[(n-1)/2] ; 
    }
    else if( n%2 == 0 ){
        cout << "median is " << (arr[(n)/2] + arr[(n/2)+1] )/2 << endl ; 
    }

    return 0 ; 
}

int main(){
    vector<int> arr1 = { 1,3,4,5,2} ; 
    int n  = 5 ; 
    medianElement(arr1 , n ) ; 
    return 0 ; 
}