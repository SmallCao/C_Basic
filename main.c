#include <stdio.h>
#include "hello.h"

#include "arraym.h"
#include "parray.h"
#include "structm.h"
#include "height.h"
#include "1_operator_test.h"

int test() {
    int a = 5;
    if (a > 0) {
        return 4;
    } else {
        return 0;
    }
}

int main() {
    /*printf("Hello, World!\n");
    printf_s("123\n");
    int c = test();
    printf("%d", c);
    SayHello();

    genArray();*/
//    ����ָ��
//    pArray();

//    �����ṹ��
//    create();
//    test_height(); //С��������
    //���������
    test_operator_main();
    typedef int S;
    S a  = 2;
    int b = 10;
    int c = a+b;
    printf("\n%d",c);
    return 0;
}


