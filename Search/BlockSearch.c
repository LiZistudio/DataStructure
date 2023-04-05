#include <stdio.h>
#include <stdlib.h>

#define INITSIZE 10
//分块查找
//索引表
typedef struct BlockIndex {
    int max_key;
    int high;
    int low;
}BlockIndex;

//实际存放数值的数组
typedef struct BlockValue {
    int* data;
    int length;
}BlockValue;

int main (){


    return 0;
}