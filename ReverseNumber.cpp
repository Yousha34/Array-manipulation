#include<iostream>
using namespace std ;
int main(){

    int a = 1 ;
    int arr[5] ;

    for( int i = 0; i <= 4; i++ ){

        cout << "Enter element number " << a << " : " ;
        cin >> arr[i] ;
        a++ ;

    }

    for( int i = 4; i >= 0; i-- ){        
        cout << arr[i] << " " ;
    }

    return 0 ;
}