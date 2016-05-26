#include <iostream>
#include <memory>
#include <cstring>
#include <iomanip>

#include "01.BasicBubble.cpp"
#include "02.ImproveBubbleV1.0.cpp"
#include "03.ImproveBubbleV2.0.cpp"
#include "04.ImproveBubbleV3.0.cpp"

#define N I500

int main() {
    /* Test Code */
    int array[N];
    Init ( array, N );
    //Print ( array, N );
    /* ��֤��������Ԫ����ͬ */
    int array0[N], array1[N], array2[N], array3[N];
    memcpy ( array0, array, sizeof ( array ) );
    memcpy ( array1, array, sizeof ( array ) );
    memcpy ( array2, array, sizeof ( array ) );
    memcpy ( array3, array, sizeof ( array ) );
    /* �������ʱ������ ��λ����(s)*/
    cout << setw ( 20 ) << "BasicBubble��ʱ��" << ImproveBubble3 ( array0, N ) << "s" << endl;
    cout << setw ( 20 ) << "ImproveBubble1��ʱ��" << ImproveBubble3 ( array1, N ) << "s" << endl;
    cout << setw ( 20 ) << "ImproveBubble2��ʱ��" << ImproveBubble3 ( array2, N ) << "s" << endl;
    cout << setw ( 20 ) << "ImproveBubble3��ʱ��" << ImproveBubble3 ( array3, N ) << "s" << endl;
    return 0;
}
