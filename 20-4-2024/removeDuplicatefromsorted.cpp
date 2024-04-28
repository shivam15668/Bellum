/*Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.*/


/*Intuition: We have to think of a data structure that does not store duplicate elements. So can we use a Hash set? Yes! We can. As we know HashSet only stores unique elements.

Approach: 

Declare a HashSet.
Run a for loop from starting to the end.
Put every element of the array in the set.
Store size of the set in a variable K.
Now put all elements of the set in the array from the starting of the array.
Return K.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[] , int n ){
    set<int>set ; 
    for(int i = 0 ; i< n; i++){
        set.insert(arr[i]) ; 
    }
    int k = set.size();
    int j = 0 ; 
    for(int x:set){
        arr[j++] = x ; 
    }
    return k ; 
}
int main(){
    int arr1[] = {1,2,3,3,5,6,5} ; 
    
    int n = 7 ; 
    int k = removeDuplicates(arr1, n) ;
    cout << "array after duplicated removed : " << " "; 
    for(int i = 0 ; i<k ; i++){
        cout<<arr1[i] ; 
    }
}