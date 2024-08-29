// second largest number 

#include <iostream>
using namespace std;
int main() {

    int n ;

    cout << "Enter no : " ;
    cin >> n ;
    cout << endl ;

    int arr[n] ;

    for ( int i = 0; i < n; ++i ) {

        cout << "Enter " << i+1 << " element : " ;
        cin >> arr[i] ;

    }
 
    int max = arr[0] ;
    int second_max = arr[0] ;

    for ( int i = 0; i < n; i++ ){

        if ( arr[i] > max ){

            second_max = max ;
            max = arr[i] ;

        }

        else if ( arr[i] > second_max && arr[i] < max ){
            second_max = arr[i] ;
        }

        else if ( max == second_max ){
            second_max = arr[i] ;
        }
    }

    cout << "\nThe largest is : " << max << "\nThe second largest is: " << second_max;

    return 0;
}