#include <stdio.h>
#include <stdlib.h>

#define InitSize 10

// 创建一个顺序表
typedef struct SeqList
{
    int *data;
    int length;
    int MaxSize;
} SeqList;

// 初始化顺序表
void InitList(SeqList *L)
{
    L->data = (int *)malloc(InitSize * sizeof(int));
    L->length = 0;
    L->MaxSize = InitSize;
}

// 扩容
void IncreaseList(SeqList *L, const int len)
{
    int *p = L->data;
    L->data = (int *)malloc((L->MaxSize + len) * sizeof(int));
    for (int i = 0; i < L->length; i++)
    {
        L->data[i] = p[i];
    }

    L->MaxSize = L->MaxSize + len;
    free(p);
}

// 按数值查找
int SortList(const SeqList *L, const int x)
{
    for (int i = 0; i < L->length; i++)
    {
        if (x == L->data[i])
        {
            return i;
        }
    }
    return 0;
}
// 按位序查找
int SortListnum(const SeqList *L, const int y)
{
    return L->data[y - 1];
}

// 插入
void InsertList(SeqList *L, const int p, const int number)
{
    for (int i = L->length - 1; i >= p; i--)
    {
        L->data[i + 1] = L->data[i];
    }
    L->data[p] = number;
    L->length++;
    printf("插入成功\n");
}
// 删除
void DeleteList(SeqList *L, const int p)
{
    for (int i = p; i <= L->length; i++)
    {
        L->data[i] = L->data[i + 1];
    }
    L->length--;
    printf("删除成功\n");
}

int main(void)
{
    SeqList L;
    InitList(&L);
    if (L.data != NULL)
    {
        printf("success!\n");
    }
    else
    {
        printf("fail");
    }
    L.data[0] = 4;
    L.data[1] = 8;
    L.data[2] = 7;
    printf("%d\n%d\n", SortList(&L, 8), SortList(&L, 4));
    printf("查找结果为：%d\n", SortListnum(&L, 2));
    IncreaseList(&L, 10);
    if (L.data != NULL)
    {
        printf("success too!\n");
    }
    DeleteList(&L, 2);
    InsertList(&L, 2, 9);
    printf("%d\n", L.data[2]);
    return 0;
}
