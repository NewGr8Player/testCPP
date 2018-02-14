/*
 * 最好：O( n )
 * 最坏：O( n^2 )
 *      比较次数：Cmax = n ( n - 1 ) / 2
 *      移动次数：Mmax = 3 * n ( n - 1 ) / 2
 **/
#include <iostream>
#include "test.h"

template<class T>
double ImproveBubble3 ( T *myArray , int n ) {
    clock_t start_time = clock();
    int low, up, index, i;
    low = 0;
    up = n - 1;
    index = low;
    while ( up > low ) {
        for ( i = low; i < up; i++ ) { /* 从上向下扫描 */
            if ( myArray[i] > myArray[i + 1] ) {
                Swap ( myArray[i],  myArray[i + 1] );
                index = i;
            }
        }
        up = index; /* 记录最后一个交换的位置 */
        for ( i = up; i > low; i-- ) { /* 从最后一个交换位置处从下向上扫描 */
            if ( myArray[i] < myArray[i - 1] ) {
                Swap ( myArray[i],  myArray[i - 1] );
                index = i;
            }
        }
        low = index; /* 记录最后一个交换的位置 */
    }
    clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
