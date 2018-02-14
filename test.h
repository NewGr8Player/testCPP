#ifndef Test
#define Test

#include <cstdlib>
#include <ctime>
#include <cstdlib>

using namespace std;

#define I500 500
#define I5000 5000
#define I20000 20000

template<class T>
void Swap ( T &sw1, T &sw2 ) {
    T temp = sw1;
    sw1 = sw2;
    sw2 = temp;
}

template<class T>
void Init ( T * myArray, int n ) {
    srand ( time ( 0 ) );
    for ( int i = 0 ; i < n ; i++ ) {
        myArray[i] = ( T ) ( rand() % 100 + 1 );
    }
}

template<class T>
void Print ( T *myArray, int n ) {
    for ( int i = 0 ; i < n ; i++ ) {
        cout << myArray[i] << " ";
    }
    cout << endl;
}

#endif
