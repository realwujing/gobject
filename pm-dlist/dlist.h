/* file name: dlist.h（版本 2）*/
 
#ifndef DLIST_H
#define DLIST_H
 
typedef struct _DListNode DListNode;    // 将 double_list 简写为 dlist，typedef 关键字去定义数据类型
struct  _DListNode {
        DListNode *prev;
        DListNode *next;
        void *data;
};
 
typedef struct _DList DList;    // 还使用了 Pascal 命名惯例，即单词首字母大写
struct  _DList {
        DListNode *head;
        DListNode *tail;
};
 
#endif