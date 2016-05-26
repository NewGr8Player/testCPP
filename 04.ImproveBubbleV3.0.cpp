/*
 * ��ã�O( n )
 * ���O( n^2 )
 *      �Ƚϴ�����Cmax = n ( n - 1 ) / 2
 *      �ƶ�������Mmax = 3 * n ( n - 1 ) / 2
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
        for ( i = low; i < up; i++ ) { /* ��������ɨ�� */
            if ( myArray[i] > myArray[i + 1] ) {
                Swap ( myArray[i],  myArray[i + 1] );
                index = i;
            }
        }
        up = index; /* ��¼���һ��������λ�� */
        for ( i = up; i > low; i-- ) { /* �����һ������λ�ô���������ɨ�� */
            if ( myArray[i] < myArray[i - 1] ) {
                Swap ( myArray[i],  myArray[i - 1] );
                index = i;
            }
        }
        low = index; /* ��¼���һ��������λ�� */
    }
    clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
