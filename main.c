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
//    数组指针
//    pArray();

//    创建结构体
//    create();
//    test_height(); //小球掉落测试
    //测试运算符
    test_operator_main();
    return 0;
}


