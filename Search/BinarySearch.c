#include <stdio.h>
#include <stdlib.h>

//二分查找
//二分查找仅适用于有序的顺序表
#define Initsize 10

//查找表（顺序表）
typedef struct SSTable {
    int* data;
    int TableLen;
}SSTable;

//二分查找
int BinarySearch (const SSTable* Tab,const int key){
    int high = Tab->TableLen-1;
    int low = 0;
    int mid = 0;
    while (low <= high) {
        mid = (high+low)/2;
        if (Tab->data[mid] < key)
        {
            low = mid + 1;
        }else
        if (Tab->data[mid] > key)
        {
            high = mid-1;
        }else{
            printf("%d为第%d个数:)\n",key,mid);
            return mid;
        }
    }
    printf("not found!\n");
    return -1;
}

//初始化查找表
void InitSstable (SSTable* T) {
    T->data = (int*)malloc(Initsize*sizeof(int));
    T->TableLen = Initsize;
    for (int  i = 0; i < Initsize; i++)
    {
        T->data[i] = i;
    }
    
}

void test (){
    SSTable t1;
    InitSstable(&t1);
    // for (int i = 0; i < t1.TableLen; i++)
    // {
    //     printf("%d\t",t1.data[i]);
    // } 
    BinarySearch(&t1,6);
    BinarySearch(&t1,10);
    BinarySearch(&t1,5);
}

int main (){
    test();
    return 0;
}
