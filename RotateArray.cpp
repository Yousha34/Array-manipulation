#include<iostream>
using namespace std ;

void my_function( int arr[], int starting_pt, int ending_pt ){

    for( int i = starting_pt, j = ending_pt ; i < j; i++, j-- ){

        arr[i] = arr[i] + arr[j] ;
        arr[j] = arr[i] - arr[j] ;
        arr[i] = arr[i] - arr[j] ;
        
    }

    return ;

}

int main(){

    int size, number ;

    cout << "Enter size : " ;
    cin >> size ;

    cout << "Enter number : " ;
    cin >> number ;

    int arr[size];

    for( int i = 0; i < size; i++ ){

        cout << "Enter " << i+1 << " element : " ;
        cin >> arr[i] ;

    }

    number = number % size ;

    my_function( arr, 0, size-1 );
    my_function( arr, 0, number-1 );
    my_function( arr, number, size-1 );

    for( int i = 0; i < size; i++ ){
        cout <<  arr[i] << " " ;
    }

    return 0 ;
}