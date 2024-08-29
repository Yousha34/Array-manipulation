#include<iostream>
using namespace std ;

void my_function( int arr[], int size ){

    for( int i = 0, j = size-1; i < j ; i++, j-- ){

        arr[i] = arr[i] + arr[j] ;
        arr[j] = arr[i] - arr[j] ;
        arr[i] = arr[i] - arr[j] ;

    }

    return ;

}

int main(){

    int size ;

    cout << "Enter no : " ;
    cin >> size ;

    int arr[size];

    for( int i = 0; i < size; i++ ){

        cout << "Enter " << i+1 << " element : " ;
        cin >> arr[i] ;

    }

    my_function( arr, size );

    for( int i = 0; i < size; i++ ){
        cout <<  arr[i] << " " ;
    }

    return 0 ;
}