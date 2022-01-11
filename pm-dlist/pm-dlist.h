/* file name: pm-dlist.h*/
 
#ifndef PM_DLIST_H
#define PM_DLIST_H
 
typedef struct _PMDListNode PMDListNode;
struct  _PMDListNode {
        PMDListNode *prev;
        PMDListNode *next;
        void *data;
};
 
typedef struct _PMDList PMDList;
struct  _PMDList {
        PMDListNode *head;
        PMDListNode *tail;
};
 
#endif

/**
 * @brief 但是，由于 C 语言没有为数据类型提供自定义命名空间的功能，
 * 程序中所有的数据类型（包括函数）均处于同一个命名空间，
 * 这样数据类型便存在因为同名而撞车的可能性。
 * 为了避免这一问题，更专业一点的程序员会为数据类型名称添加一些前缀，
 * 并且通常会选择项目名称的缩写。我们可以为这种命名方式取一个名字，
 * 叫做 PT 格式，P 是项目名称缩写，T 是数据类型的名称。
 * 例如，对于一个多面体建模（Polyhedron Modeling）的项目，
 * 如果要为这个项目定义一个双向链表的数据类型，
 * 通常是先将 dlist.h 文件名修改为 pm-dlist.h
 * 
 */