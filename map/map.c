/*~~~~~~~~~~~~~Author:Kongkong~~~~Time:2023.03.31~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*图的领接矩阵存储结构定义*/

#define MaxVertexnum 100                                //定点数目的最大值

typedef struct MGraph{
        short Vex[MaxVertexnum];                        //顶点表
        short Edge[MaxVertexnum][MaxVertexnum];         //领接矩阵，边表
        short vexnum;                                   //当前顶点数&边数
        short arcnum;
}MGraph;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


/*有向图的十字链表存储结构定义*/

typedef struct TLinkList {
        int info;
        int headvex,tialvex;
        struct TLinkList* hlink;
        struct TLinkList* tlink;
}TLinkList;


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*图的邻接表定义*/
//图中顶点数目的最大值
#define MaxVertecnum 100

//边表结点
typedef struct ArcNode {
        int adjvex;     //该弧所指向的顶点的位置
        int info;       //该弧的权值信息
        struct ArcNode* nextarc;        //该弧所指向的下一条弧
}ArcNode;

//顶点表结点
typedef struct VNode {
        int data;       //顶点表结点信息
        ArcNode* firstNode;     //顶点指向的第一条弧
}VNode,Adjlist[MaxVertecnum];

typedef struct Graph{
        Adjlist vertices;        //邻接表
        int vexnum,arcnum;      //图的顶点数&弧数
}Graph;         //以邻接表存储的图类型

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

