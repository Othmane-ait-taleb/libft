typedef struct l_list
{
    int i;
    char c;
    struct l_list *next;
} t_list;



int main(int argc, char const *argv[])
{
    t_list e1;
    t_list e2;
    t_list e3;
    t_list *bgn;

    bgn = &e1;
    e1.next = &e2;
    e2.next = &e3;
    e2.i = 13;
    printf("%d",e2.i);

    bgn->next->i = 37;

    printf("%d",e2.i);

    return 0;
}
