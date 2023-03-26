/*
*二叉树的递归遍历
*author:Kongkong
*time:2023.3.24
*/

#include <stdio.h>

//二叉树结点
typedef struct BTNode{
    int data;
    struct BTNode* lchild;
    struct BTNode* rchild;
}BTNode;

//声明visit函数
void visit (const BTNode* T){
    printf("%d\t",T->data);    
}

//二叉树前序递归遍历
void preOrder(const BTNode* T){
	if(T != NULL){
		visit(T);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}

//中序遍历
void InOrder(const BTNode* T){
	if(T != NULL){
		preOrder(T->lchild);
        visit(T);
		preOrder(T->rchild);
	}
}

//后续遍历
void TailOrder(const BTNode* T){
	if(T != NULL){
		preOrder(T->lchild);
		preOrder(T->rchild);
        visit(T);
	}
}

int main (){
    BTNode T1 = {97,NULL,NULL};
    BTNode T2 = {99,NULL,NULL};
    BTNode T = {98,&T1,&T2};
    printf("前序遍历序列为:");
    preOrder(&T);
    printf("\n");
    printf("中序遍历序列为:");
    InOrder(&T);
    printf("\n");
    printf("后序遍历序列为:");
    TailOrder(&T);
    printf("\n");
    return 0;
}

