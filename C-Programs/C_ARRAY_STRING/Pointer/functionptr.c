#include <stdio.h>

void greet()
{
    printf("Hello, welcome!\n");
}

int add(int a, int b)
{
    return a + b;
}

void main()
{

    void (*greetPtr)() = greet;

    int (*addPtr)(int, int) = add;

    greetPtr(); 

    int sum = addPtr(5, 10); 

    printf("Sum of 5 and 10: %d\n", sum);
}