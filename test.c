#include "libft.h"


void f(char *t)
{
    free(t);
}
int main(int argc, char const *argv[])
{
char *p = malloc(sizeof(char));
char *o = "";
char *t = o;
p = t;
f(p);

    return 0;
}
