//
// Created by cao_c on 2021/4/15.
//

#include "parray.h"
#include "stdio.h"
#include "string.h"

struct {

};

void pArray(){
//    char b = 'a';
//    char* bb = "a";
//    char** bbb[] = {"accc", "bccc"};
//    printf("%s\n",*bbb);
//    printf("%s\n",bbb+1);
    int ages[] = {1,2,3,4,5,6};
    int ac = sizeof (ages)/sizeof (int);
    printf("ages count is %d\n",ac);
    char *arr[] = {"zouni","quni","dani","wode","wode"};
    char ** arr1 = arr;

    int count = sizeof(arr1);
    printf("count = %d\n",count);
    printf("---------aa");

    char a[] = "Cao";
    printf("char length = %llu\n",sizeof (char));
    printf("a length = %1d",sizeof (a)/sizeof (char));
}