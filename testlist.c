#include "list.h"
#include <stdio.h>
static void expand_macro(void)
{
    struct list_head t3;
    struct list_head t1 =
    {
        &t1,
        &t1
    };    
    LIST_HEAD(t2);
    INIT_LIST_HEAD(&t3);
    printf("t1(%p:%p,%p)\n",&t1,t1.prev,t1.next);
    printf("t2(%p:%p,%p)\n",&t2,t2.prev,t2.next);
    printf("t3(%p:%p,%p)\n",&t3,t3.prev,t3.next);
}

static void stack_test(void)
{
    LIST_HEAD(s);
    LIST_HEAD(s1);
    LIST_HEAD(s2);
    LIST_HEAD(s3);
    list_add(&s1,&s);
    list_add(&s2,&s);
    list_add(&s3,&s);

    printf("s(%p),s->prev(%p),s->next(%p))\n",&s,s.prev,s.next);
    printf("s1(%p),s1->prev(%p),s1->next(%p))\n",&s1,s1.prev,s1.next);
    printf("s2(%p),s2->prev(%p),s2->next(%p))\n",&s2,s2.prev,s2.next);
    printf("s3(%p),s3->prev(%p),s3->next(%p))\n",&s3,s3.prev,s3.next);
}

int main()
{
    printf("test link list\n");
    expand_macro();
    stack_test();
    return 0;
}
