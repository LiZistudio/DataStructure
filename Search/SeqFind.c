#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
//顺序表
typedef struct SqList{
    int* data;
    int length;
}SqList;

//顺序查找函数
int SqFind (const SqList* L,const int num) {
    int i = 0;
    for ( i = 0; i < L -> length; i++)
    {
        if (num == L->data[i]) {
            printf("则查找的数字%d为第%d个数:)\n",num,i);
            return i;
        }
    }    
}

//初始化顺序表
void InitSqlist(SqList* L){
    L -> data = (int*) malloc (MAXSIZE*sizeof(int));
    L -> length = MAXSIZE;
    for (int i = 0; i < MAXSIZE; i++)
    {
        L->data[i] = i+1;
    }
    
}

void test (){
    SqList l1;
    InitSqlist(&l1);
    // for (int i = 0; i < Maxsize; i++)
    // {
    //     printf("%d\t",l1.data[i]);
    // }
    SqFind(&l1,6);
    SqFind(&l1,8);
}
int main () {
    
    test();
    return 0;
}