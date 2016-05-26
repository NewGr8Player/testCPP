/*
 * ��ã�O( n )
 * ���O( n^2 )
 *      �Ƚϴ�����Cmax = n ( n - 1 ) / 2
 *      �ƶ�������Mmax = 3 * n ( n - 1 ) / 2
 **/

#include <iostream>
#include "test.h"

template<class T>
double ImproveBubble1 ( T *myArray, int n ) {
    clock_t start_time = clock();
    bool isSorted  =  false;
    for ( int i  =  0;  i  <  n  - 1  &&  !isSorted;  i++ ) { /* ֻ����û�����������²ż���ѭ�� */
        isSorted  =  true;/* �趨�����־ */
        for ( int j  =  0;  j  <  n  - 1  - i;  j++ ) {
            if ( myArray[j]  >  myArray[j + 1] ) {
                isSorted  =  false; /* �����û�����򣬾������趨��־ */
                Swap ( myArray[i],  myArray[i + 1] );
            }
        }
    }
    clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
