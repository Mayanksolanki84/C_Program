#include<stdio.h>

void main()
{
    int a = 12;

    int *ptr;

    ptr = &a;

    printf("Value of a: %d\n",a);

    printf("Address of a: %p\n", &a);

    printf("Value of ptr (address stored in ptr): %p\n", ptr);

    printf("Value at ptr (value of a via pointer): %d\n", *ptr);


}