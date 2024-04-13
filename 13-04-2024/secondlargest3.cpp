// recursive approach 

#include<bits/stdc++.h>
using namespace std; 
void getElements(int arr[] , int n ){
    if(n==0 || n ==1){
        cout << -1 << " " << -1 << endl ;
    }
    int small = INT_MAX , second_small = INT_MAX ;
    int large = INT_MIN , second_large = INT_MIN ; 
    for( int i = 0 ; i<n ; i++){
        small = min(small , arr[i]) ; 
        large = max(large, arr[i]) ; 
    }
    for ( int i = 0 ; i< n ; i++ ){
        if( arr[i] < second_small && arr[i] != small ){
            second_small = arr[i] ; 
        }
        if( arr[i] > second_large && arr[i] != large){
            second_large = arr[i] ; 
        }

        
    }

    cout << "second small element is " << second_small << endl ;
    cout << " second largest element is " << second_large  ;
}

int main(){
    int arr1[] = { 10,34,22,3,45,32} ; 
    int n = sizeof(arr1)/sizeof(arr1[0]) ; 
    getElements(arr1 , n) ; 
    return 0 ; 
}

// complexity = 2 linear o(N)
// space = = o(1)

// also do checkout for duplicate elements
// optimal would be to do in one single iteration // linear pass