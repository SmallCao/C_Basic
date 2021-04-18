//
// Created by cao_c on 2021/4/18.
//

#include "height.h"
#include "stdio.h"

//习题： 一个铁球从100米高度落下，每次落下反弹高度的一半，
//第10次落下的高度是多少，反弹多少米
void test_height(){
    float sum = 0.f;
    float start = 100.f;
    float height = 0.f;
    for (int i = 1; i <= 10; i++) {
        if (i == 1) {
            height = start / 2;
            sum = start;
        } else {
            sum += height;
            height /= 2;
        }
        printf("sum height is %f meter;bounce height is %f meter;\n",sum,height);
    }

}
