#include<iostream>
using namespace std ;
int main(){

    int size ;

    cout << "Enter no : " ;
    cin >> size ;

    int arr[size], brr[size] ;

    for( int i = 0; i < size; i++ ){

        cout << "Enter " << i+1 << " element : " ;
        cin >> arr[i] ;

    }

    for( int i = 0; i < size; i++ ){
        
        int a = size - 1 ;
        brr[i] = arr[a-i] ;
        
    }

    for( int i = 0; i < size; i++ ){
        cout <<  brr[i] << " " ;
    }

    return 0 ;
}