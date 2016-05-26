/*
 * ��ã�O( n )
 * ���O( n^2 )
 *      �Ƚϴ�����Cmax = n ( n - 1 ) / 2
 *      �ƶ�������Mmax = 3 * n ( n - 1 ) / 2
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
                k = j; /* ��¼ÿ�ν�����λ�� */
                isSorted  =  false; /* �����û�����򣬾������趨��־ */
            }
        }
        m = k; /* ��¼���һ��������λ�� */
    }
    clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
