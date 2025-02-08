#include <stdio.h>
#include <time.h>

int main()
{
    char charVariable;
    short shortVariable;
    int intVariable;
    long longVariable;
    float floatVariable;
    double doubleVariable;

    printf("Size of char: \t%zu bytes\n", sizeof(charVariable));        // 1 byte
    printf("Size of short: \t%zu bytes\n", sizeof(shortVariable));      // 2 bytes
    printf("Size of int: \t%zu bytes\n", sizeof(intVariable));          // 4 bytes
    printf("Size of long: \t%zu bytes\n", sizeof(longVariable));        // 4 bytes
    printf("Size of float: \t%zu bytes\n", sizeof(floatVariable));      // 4 bytes
    printf("Size of double:\t%zu bytes\n", sizeof(doubleVariable));     // 8 bytes

    return 0;
}