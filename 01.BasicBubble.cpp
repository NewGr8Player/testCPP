#include <iostream>
#include "test.h"

template<class T>
double BasicBubble(T *myArray,int n) {
    clock_t start_time = clock();
	for(int i = 0; i < n; i++) { /* 循环的趟数 */
		for(int j = 0; j < n - 1 - i; j++) { /* 每趟循环的次数 */
			if(myArray[j] > myArray[j + 1]) {
				Swap(myArray[i],myArray[i + 1]);
			}
		}
	}
	clock_t end_time = clock();
    return ( double ) ( end_time - start_time ) / CLOCKS_PER_SEC ;
}
