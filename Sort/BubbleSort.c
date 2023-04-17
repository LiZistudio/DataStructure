#include <stdio.h>
#include <stdlib.h>

//交换两个值
void swap (int a ,int b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

//冒泡排序
void BubbleSort (int* arr,const int len ){
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                //swap(arr[j],arr[j+1]);
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];

            }
            
        }
        
    }
}

//打印数组
void PrintArr(const int* arr,const int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main (){
    int arr1[] = {23,45,23,68,90,67,45,23,12,89};
    int length = sizeof(arr1)/sizeof(int);

    printf("排序前：");
    PrintArr(arr1,length);
    BubbleSort(arr1,length);
    printf("排序后：");
    PrintArr(arr1,length);        
    return 0;
}
