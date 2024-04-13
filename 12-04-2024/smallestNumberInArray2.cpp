//Recursive approach 
#include<iostream>
using namespace std; 
int findSmallestNumber(int arr[] , int n ){
    int min = arr[0] ; 
    for(int i = 0 ; i<n ; i++){
        if(min > arr[i]){
            min = arr[i] ; 
        }
    }
    return min ; 
}

int main(){
    int arr1[] = {1,3,4,5,6};
    int n = 5 ; 
    cout << "smallest number in array is "<< findSmallestNumber(arr1 , n)<<endl; 
    int arr2[] = {0,3,4,5,6};
    n = 5 ; 
    cout << "smallest number in array is "<< findSmallestNumber(arr2 , n); 

    return 0 ; 
}

// complexity 0(N)
//space 0(1)