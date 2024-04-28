#include<bits/stdc++.h>
using namespace std ; 
class removeDuplicates{
    public:
      void duplicates(int arr[] , int n ){
        map<int , int> mp ;
        for( int i = 0 ; i<n ; i++){
           if(mp.find(arr[i]) == mp.end()){
            cout << arr[i]<<" "; 
            mp[arr[i]]++ ; 
           }
        }
      }
};

int main(){
    int arr1[] = {1,3,6,4,2,4,2,3,6,7,89} ; 
    int n = 11 ; 
    removeDuplicates d1 ; 
    d1.duplicates(arr1 ,n) ; 
    return 0 ; 
}