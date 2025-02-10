#include <stdio.h>

#define MAX 5

void display(int*);
void init(int*);
void insert(int*, int pos, int num);
void delete(int*, int pos);

int main() {
    int array[MAX];
    init(array);
    insert(array, 0, 1);
    insert(array, 1, 2);
    insert(array, 2, 3);
    insert(array, 3, 4);
    insert(array, 4, 5);

    display(array);
    delete(array, 2);

    display(array);
    return 0;
}

void init(int* array) {
    for(int i = 0; i < MAX; i++) {
        array[i] = 0;
    }
}

void display(int* array) {
    for(int i = 0; i < MAX; i++) {
        printf("%d\t", i);
    }
    printf("\n");

    for(int i = 0; i < MAX; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void insert(int* array, int posIdx, int num) {
    /*
        function to delete an element from array by given index
    */

    /*
        int idx;
        for(idx = MAX-1; idx >= posIdx; idx--) {
            array[idx] = array[idx-1];
        }
        array[idx] = num;
    */
    int next;
    for(int i = posIdx; i < MAX; i++) {
        next = array[i];
        array[i] = num;
        num = next;
    }
}

//???
void delete(int* array, int pos) {
    int i;
    for(i = pos; i < MAX; i++) {
        array[i-1] = array[i];
    }
    array[i-1] = 0;
}