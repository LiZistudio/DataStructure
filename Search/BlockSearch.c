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
	printf("hello blockSearch!\n");
	BlockValue b1;
	b1.data = (int*)malloc(INITSIZE*sizeof(int));
	b1.length = INITSIZE;
	return 0;
}
