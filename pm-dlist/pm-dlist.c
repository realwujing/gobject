#include "pm-dlist.h"
 
G_DEFINE_TYPE (PMDList, pm_dlist, G_TYPE_OBJECT);
 
static
void pm_dlist_init (PMDList *self)
{
        g_printf ("\t实例结构体初始化！\n");
 
        self->head = NULL;
        self->tail = NULL;
}
 
static
void pm_dlist_class_init (PMDListClass *klass)
{
        g_printf ("类结构体初始化!\n");
}

/**
 * @brief 在上述的 pm-dlist.c 中，我们并没有看到 pm_dlist_get_type 函数的具体实现，
 * 这是因为 GObject 库所提供的 G_DEFINE_TYPE 宏可以为我们生成 pm_dlist_get_type 函数的实现代码。
 * 
 * G_DEFINE_TYPE 可以让 GObject 库的数据类型系统能够识别我们所定义的 PMDList 类类型，
 * 它接受三个参数，第一个参数是类名，即 PMDList；
 * 第二个参数则是类的成员函数（面向对象术语称之为”方法“或”行为“）名称的前缀，例如 pm_dlist_get_type 函数即为 PMDList 类的一个成员函数，"pm_dlist" 是它的前缀；
 * 第三个参数则指明 PMDList 类类型的父类型为 G_TYPE_OBJECT……嗯，这又是一个该死的宏！
 */