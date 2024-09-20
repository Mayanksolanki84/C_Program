#include <stdio.h>

void main()
{

    int no;
    printf("enter a no: ");
    scanf("%d", &no);

    if ("%d", no % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}