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

static inline void __list_add(struct list_head *new,struct list_head *prev,struct list_head *next);

static inline void list_add(struct list_head *new, struct list_head *head);