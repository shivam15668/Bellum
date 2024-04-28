#include<bits/stdc++.h>
using namespace std ;
class removeDuplicates{
    public: 
    void duplicate(int arr[] , int n){
            int mark[n] = {1} ; 
    
    for(int i = 0 ; i < n ; i++){
        if(mark[i] == 1){
            for(int j = i+1 ; j<n ; j++){
                if(arr[i] == arr[j]){
                    mark[j] == 0 ; 
                }
            }
        }
    }

    for( int i = 0 ; i< n ; i++){
        if(mark[i] == 0 ){
            cout<<arr[i]<<" " ; 
        }
    }
}

};

int main(){
    int arr1[] = {1,2,3,3,4,5,9,3,5,6,2}; 
    int n = 11 ;
    removeDuplicates d1 ; 
    d1.duplicate(arr1 , n) ; 
    return 0 ; 
}
