//
// Created by small.cao on 2021/4/19.
//

#include <stdio.h>
#include "callbackm.h"

typedef int (*A)();

int A1(){
    return 1;
}

int A2(){
    return 2;
}
void ttest(A a){
    int result = a();
    printf("执行回调结果：%d\n",result);
}

void callback() {
    ttest(A1);
}
