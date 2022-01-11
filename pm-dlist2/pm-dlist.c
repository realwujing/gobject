#include "pm-dlist.h"
 
G_DEFINE_TYPE (PMDList, pm_dlist, G_TYPE_OBJECT);
#define PM_DLIST_GET_PRIVATE(obj) (\
        G_TYPE_INSTANCE_GET_PRIVATE ((obj), PM_TYPE_DLIST, PMDListPrivate))
 
typedef struct _PMDListNode PMDListNode;
struct  _PMDListNode {
        PMDListNode *prev;
        PMDListNode *next;
        void *data;
};
 
typedef struct _PMDListPrivate PMDListPrivate;
struct  _PMDListPrivate {
        PMDListNode *head;
        PMDListNode *tail;
};
 
static void
pm_dlist_class_init (PMDListClass *klass)
{
        g_type_class_add_private (klass, sizeof (PMDListPrivate));
}
 
static void
pm_dlist_init (PMDList *self)
{
        PMDListPrivate *priv = PM_DLIST_GET_PRIVATE (self);
         
        priv->head = NULL;
        priv->tail = NULL;
}

/**
 * @brief 由 于 pm_dlist_class_init 函数会先于 pm_dlist_init 函数被 g_object_new 函数调用，
 * GObject 库的类型管理系统可以从 pm_dlist_class_init 函数中获知 PMDListPrivate 结构体所占用的存储空间，
 * 从而 g_object_new 函数在为 PMDList 对象的实例分配存储空间时，便会多分出一部分以容纳 PMDListPrivate 结构体，这样便相当于将一个 PMDListPrivate 结构体挂到 PMDList 对象之中。
 * GObject 库对私有属性所占用的存储空间是由限制的。一个 GObject 子类对象，它的私有属性及其父类对象的私有属性累加起来不能超过 64 KB。
 * 
 */
