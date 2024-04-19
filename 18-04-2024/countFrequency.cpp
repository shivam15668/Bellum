#include<bits/stdc++.h>
using namespace std ; 
void countFrequency(int arr[] , int n ){
    vector<bool>visited(n, false);
    for(int i = 0 ; i< n ; i++){
        if(visited[i] == true)
          continue ; 
    

     int count = 1 ; 
     for( int j =  i+1 ; j<n ; j++){
        if(arr[i] == arr[j]){
            visited[j] = true ; 
            count++ ; 
        }
        
    }

    cout << arr[i] << " "<<  count << endl ;
    }
}
int main(){
    int arr1[] = {1,33,4535,2,13,34,24,12,33,33} ; 
    int n  = sizeof(arr1)/sizeof(arr1[0]) ; 
    countFrequency(arr1 , n ) ; 
    return 0 ; 
}