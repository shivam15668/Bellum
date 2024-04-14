// bid to do the program in 1 linear iteration, other than 2 

#include<bits/stdc++.h>
# include <iostream>
using namespace std ; 
int secondSmallest(int arr[] , int n ){
    if(n<2){
        return -1 ; 
    }
    int i ; 
    int small = INT_MAX , second_small = INT_MAX ; 
    for(int i = 0 ; i<n ; i++){
         if( arr[i]<small){
            second_small = small ; 
            small = arr[i] ; 
         }
        else if(arr[i]<second_small && arr[i]!= small){
            second_small = arr[i] ; 
        }
    }
    return second_small ; 
}

int secondLargest(int arr[] , int n ){
    if(n<2){
        return -1 ; 
    }
    int i ; 
    int large = INT_MIN , second_large = INT_MIN ; 
    for(int i = 0 ; i<n ; i++){
         if( arr[i]>large){
            second_large = large ; 
            large = arr[i] ; 
         }
        else if(arr[i]>second_large && arr[i]!= large){
            second_large = arr[i] ; 
        }
    }
    return second_large ; 
}

int main(){
    int arr1[] = {1,2,3,4,5} ; 
    int arr2[] = {4,5,6,7,8,9};
    cout << secondLargest(arr1 , 5)<< endl;
    cout<<secondSmallest(arr2 , 6) ; 

    return 0 ; 
}
// optimal solution 

// time complexity = o(n)
// space  = o(1)