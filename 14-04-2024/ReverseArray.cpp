// solution1 : make an extra array and store the reverse of array in it 
// space complexity : o(n) // for an extra array 
// time complexity : o(n)// to traverse array single pass
#include <iostream>
using namespace std ;
void printArray(int ans[] , int n ){
    cout << "The reversed array is: " << endl ; 
    for(int i = 0 ; i< n ; i++){
        cout << ans[i] << " " ; 
    }
}

void ReverseArray(int arr[] , int n ){
    int ans[n] ;
    for( int i = n-1 ; i>= 0  ; i--){
           ans[n-i-1] = arr[i] ; 
    } 
    printArray(ans , n ) ; 
}

int main(){
    int arr1[] = {1,2,3,4,5} ; 
    int n = sizeof(arr1)/sizeof(arr1[0]);
    ReverseArray(arr1 , n) ; 
    return 0  ; 

}
//Now we will try to reduce space complexity 