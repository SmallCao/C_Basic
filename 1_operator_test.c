//
// Created by cao_c on 2021/4/18.
//

#include <stdio.h>
#include "1_operator_test.h"

void operator() {
    int a = 3; //  11;
    int b = 4; //100;
    int c = a ^b; //111;
    printf("%d", c);
}

void three_eye() {
    int a = 1;
    int b = 2;
    int c = a+b;
    printf("%d",c?a:b);
}

void test_operator_main() {
//    operator();
    three_eye();
}

