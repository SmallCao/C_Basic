//
// Created by small.cao on 2021/4/16.
//

#include "structm.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

struct Person create_person() {
    struct Person p;
    p.name = "cao";
    p.age = 30;
    p.height = 188;
    return p;
}

struct Person *create_ptr_person() {
    struct Person *p =  (sizeof(struct Person));
    p->name = strdup("small");
    p->age = 33;
    p->height = 176;
    return p;
}


void create() {
    /*struct Person p = create_person();
    printf("%p\n",p);
    printf("%p\n",&p);
    printf("%p",&p+3);*/
    struct Person *p = create_ptr_person();
    printf("---%s---", p->name);

    for (int i = 0; i < 100; i++) {
        if (i%7 == 0){
            printf("\n");
        }
        printf(" %d", i);
    }
    assert(p != NULL);

    free(p->name);
    free(p);
}