#ifndef PM_DLIST_H
#define PM_DLIST_H
 
#include <glib-object.h>
 
#define PM_TYPE_DLIST (pm_dlist_get_type ())
 
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
 
GType pm_dlist_get_type (void);
 
#endif

/**
 * @brief 显然，PM_TYPE_DLIST 这个宏是用来替代函数 pm_dlist_get_type 的，该函数的返回值是 GType 类型。
 * 我们将 PM_TYPE_DLIST 宏作为 g_object_new 函数第一个参数，
 * 这就意味着向 g_object_new 函数传递了一个看上去像是在获取数据类型的函数。
 * 不需要猜测，也不需要去阅读 g_object_new 函数的源代码，g_object_new 之所以能够为我们进行对象的实例化，
 * 那么它必然要知道对象对应的类的数据结构，pm_dlist_get_type 函数的作用就是告诉它有关 PMDList 类的具体结构。
 * 
 */