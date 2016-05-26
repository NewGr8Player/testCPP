/*
 * 最好：O( n )
 * 最坏：O( n^2 )
 *      比较次数：Cmax = n ( n - 1 ) / 2
 *      移动次数：Mmax = 3 * n ( n - 1 ) / 2
 **/
#include <iostream>
#include "test.h"

template<class T>
double ImproveBubble2 ( T *myArray , int n ) {
    clock_t start_time = clock();
    int m = n - 1, k, j;
    bool isSorted  =  false;
    while ( m > 0 ) {
        for ( k = j = 0; j < m && !isSorted; j++ ) {
            if ( myArray[j] > myArray[j + 1] ) {
                Swap ( myArray[j], myArray[j + 1] );
                k = j; /* 记录每次交换的位置 */
                isSorted  =  false; /* 如果是没有排序，就重新设定标志 */
            }
        }
        m = k; /* 记录最后一个交换的位置 */
    }
    clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
