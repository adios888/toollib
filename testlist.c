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