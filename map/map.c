/*图的领接矩阵存储结构定义*/

#define MaxVertexnum 100                                //定点数目的最大值

typedef struct MGraph{
        short Vex[MaxVertexnum];                        //顶点表
        short Edge[MaxVertexnum][MaxVertexnum];         //领接矩阵，边表
        short vexnum;                                   //当前顶点数&边数
        short arcnum;
}MGraph;

/*有向图的十字链表存储结构定义*/

typedef struct TLinkList {
        int info;
        int headvex,tialvex;
        struct TLinkList* hlink;
        struct TLinkList* tlink;
}TLinkList;
