#include <stdio.h>
#include "hello.h"

#include "arraym.h"
int test() {
    int a = 5;
    if (a > 0) {
        return 4;
    } else {
        return 0;
    }

}

int main() {
    printf("Hello, World!\n");
    printf_s("123\n");
    int c = test();
    printf("%d", c);
    SayHello();

    genArray();
    return 0;
}


