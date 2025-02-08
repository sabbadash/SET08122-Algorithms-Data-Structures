#include <stdio.h>
/*  Notice that the size of the individual members of our struct, once summed together are less than
    the implemented size of the struct. This is because the compiler strives to optimise our code when transforming it into an executable. In this case, the compiler adds some padding to the membersof the struct in order to align them */

typedef struct {
    int id;
    char name[30];
} employee;

int main() {
    employee e1 = {1, "Simon"};
    printf("ID: %d\nName: %s\n", e1.id, e1.name);
    printf("%zu %zu %zu \n", sizeof(e1.id), sizeof(e1.name), sizeof(e1));
    return 0;
}