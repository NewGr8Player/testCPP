/*
 * 最好：O( n )
 * 最坏：O( n^2 )
 *      比较次数：Cmax = n ( n - 1 ) / 2
 *      移动次数：Mmax = 3 * n ( n - 1 ) / 2
 **/

#include <iostream>
#include "test.h"

template<class T>
double ImproveBubble1 ( T *myArray, int n ) {
    clock_t start_time = clock();
    bool isSorted  =  false;
    for ( int i  =  0;  i  <  n  - 1  &&  !isSorted;  i++ ) { /* 只有在没有排序的情况下才继续循环 */
        isSorted  =  true;/* 设定排序标志 */
        for ( int j  =  0;  j  <  n  - 1  - i;  j++ ) {
            if ( myArray[j]  >  myArray[j + 1] ) {
                isSorted  =  false; /* 如果是没有排序，就重新设定标志 */
                Swap ( myArray[i],  myArray[i + 1] );
            }
        }
    }
    clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
