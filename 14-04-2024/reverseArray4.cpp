//Reverse array using library function
//c++ and java has inbuilt function to reverse array
#include<iostream>
#include<algorithm>
using namespace std; 
void printArray(int arr[] , int n){
    cout<<"The reversed array is:- "<< endl ; 
    for(int i  = 0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }
}
void reverseArray(int arr[] , int n ){
    reverse(arr , arr+n);
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int n  = sizeof(arr1)/sizeof(arr1[0]);
    reverseArray(arr1,n);
    printArray(arr1 , n );
    return 0  ; 
}
// time complexity = 0(n)
// space = 0 (1)