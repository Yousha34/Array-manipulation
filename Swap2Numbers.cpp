// swap 2 numbers 

#include<iostream>
using namespace std ;

void arr( int arr[] ){

    int temp = arr[0] ;
    arr[0] = arr[1] ;
    arr[1] = temp ;
}

int main(){

    int arr_1[2] = { 5, 3 } ;

    cout << arr_1[0] << " " << arr_1[1] << endl ;

    arr( arr_1 ) ;

    cout << arr_1[0] << " " << arr_1[1] ;

    return 0 ;
}