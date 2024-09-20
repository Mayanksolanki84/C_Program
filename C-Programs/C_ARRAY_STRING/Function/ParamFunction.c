#include<stdio.h>

void sum(int a ,int b)
{
    printf("sum of num = %d\n", a+b);
}

void multi(int a ,int b)
{
    printf("multi of num = %d\n", a*b);
}

void div(int a ,int b)
{
    printf("div of num = %d\n", a/b);
}

void sub(int a ,int b)
{
    printf("sub of num = %d\n", a-b);
}

void main ()
{
    sum(4,6);
    multi(9,2);
    div(10,2);
    sub(6,2);
}