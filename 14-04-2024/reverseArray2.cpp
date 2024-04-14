// Now to reduce space complexity of creating extra array 
// keeping pointer at index 1 and another pointer at last index 
// swap the elements for n/2 the  times 
// keep incrementing the first pointer and decrementing the last pointer by one 
#include <iostream>
using namespace std; 
void printArray(int arr[] , int n ){
    cout <<"The reversed array is "<< endl ; 
    for( int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ; 
    }
}
void reverseArray(int arr[] , int n ){
 
    int p1 = 0 , p2 = n-1 ; 
    while(p1<p2){
        swap(arr[p1] , arr[p2]) ;  
        p1++ , p2-- ; 
    }
    printArray(arr, n) ; 
}

int main(){
    int arr1[] = {1,2,3,4,5} ; 
    int n  = sizeof(arr1)/sizeof(arr1[0]) ; 
    reverseArray(arr1 , n) ; 

    return 0 ; 
}
// time complexity = 0(n)
// space = o(1)
