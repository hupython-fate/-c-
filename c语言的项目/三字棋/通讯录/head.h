#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct people{
    char name[20];
    char number[12];
    char bei_zhu[1000];
}people;

people *read_f();
void *print_f(people *);
//声名函数原型，在fun文件中写具体的算法。