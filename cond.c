
#include <stdio.h>
//programinha morpaz falando de &&, || e !=
int main (void){
    int a = 1, b = 0;
    int and, or, not;
    and = a && b;
    printf("and: %d\n", and);
    or = a || b;
    printf("or: %d\n", or);
    not = !a;
    printf("not: %d\n", not);
}
