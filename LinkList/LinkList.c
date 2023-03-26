#include <stdio.h>
#include <stdlib.h>

// 定义一个链表结点
typedef struct LNode{
    int data;           //数据域
    struct LNode *next; //next指针域
} LNode;

// 初始化一个带头结点的链表
LNode *InitLinkList(LNode *L)
{
    L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;
    if (L != NULL)
    {
        printf("first node is already\n");
    }
    return L;
}

// 头插法建立单链表
void LinkListHeadInsert(LNode *L){
    LNode *s;
    int x = 0;
    printf("please import\n");
    scanf("%d", &x);
    while (x != 666){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
}

// 测试
void testLinkList()
{
    LNode *L = NULL;
    L = InitLinkList(L);
    LinkListHeadInsert(L);
    printf("第二个结点的值为：%d\n",L->next->next->data);
}
int main()
{
    testLinkList();
    return 0;
}
