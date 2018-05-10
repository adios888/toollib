struct list_head
{
    struct list_head *next,*prev;
};

#define LIST_HEAD_INIT(name) {&(name),&(name)}
#define LIST_HEAD(name) \
    struct list_head name = LIST_HEAD_INIT(name)

#define INIT_LIST_HEAD(ptr) do{ \
    (ptr)->next = (ptr); (ptr)->prev = (ptr); \
}while(0)


static inline void __list_add(struct list_head *new,
                    struct list_head *prev,
                    struct list_head *next)
{
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}

static inline void list_add(struct list_head *new, struct list_head *head)
{
    __list_add(new,head,head->next);
}


int main()
{
    struct list_head test =
    {
        &test,
        &test
    };    

    struct zero 
    {
        int a;
        char b;
        char *p;
    }ztest;

    LIST_HEAD(t1);

    struct list_head *head;
    INIT_LIST_HEAD(head);
    
    void *p = ((struct list_head*)0)->prev;

    void *p1 = ((struct zero*)0)->p;


    return 0;
}




