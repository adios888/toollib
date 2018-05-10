#include "list.h"

/*
 * Inset a new entry between two know consecutive eneties
 */
static inline void __list_add(struct list_head *new,
                    struct list_head *prev,
                    struct list_head *next)
{
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}

/*
 *  Inset a new entry after the specified head
 *  This is good for implementing stacks
 */
static inline void list_add(struct list_head *new, struct list_head *head)
{
    __list_add(new,head,head->next);
}

/*
 *  Inset a new entry before the specified head.
 *  This is useful for implementing queues
 */
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
    __list_add(new,head->prev,head);
}




