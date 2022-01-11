/* file name: pm-dlist.h*/
 
#ifndef PM_DLIST_H
#define PM_DLIST_H
 
#include <glib-object.h>
 
typedef struct _PMDListNode PMDListNode;
struct  _PMDListNode {
        PMDListNode *prev;
        PMDListNode *next;
        void *data;
};
 
typedef struct _PMDList PMDList;
struct  _PMDList {
        GObject parent_instance;
        PMDListNode *head;
        PMDListNode *tail;
};
 
typedef struct _PMDListClass PMDListClass;
struct _PMDListClass {
        GObjectClass parent_class;
};
 
#endif

/**
 * @brief 使用 GObject 库模拟类的数据封装形式
 * 但是，上述代码的确构成了一个类。在 GObject 世界里，类是两个结构体的组合，
 * 一个是实例结构体，另一个是类结构体。例如，PMDList 是实例结构体，PMDListClass 是类结构体，
 * 它们合起来便可以称为 PMDList 类（此处的“PMDList 类”只是一个称谓，并非是指 PMDList 实例结构体。
 * 下文将要谈及的“GObject 类”的理解与此类似）。

 *也许你会注意到，PMDList 类的实例结构体的第一个成员是 GObject 结构体，
 *PMDList 类的类结构体的第一个成员是 GObjectClass 结构体。
 *其实，GObject 结构体与 GObjectClass 结构体分别是 GObject 类的实例结构体与类结构体，
 *当它们分别作为 PMDList 类的实例结构体与类结构体的第一个成员时，这意味着 PMDList 类继承自 GObject 类。
 * 
 */