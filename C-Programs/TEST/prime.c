#include <stdio.h>

void main ()
{
int i = 7;
int c = 0;

for (int a = 2; a < i; a++) 
{ 
  if (i % a == 0)
  {
    c++;
  }

 }

if (c!=0)
{
   printf("This is not a prime no ");
}
else
{
    printf("This is a prime no ");
}

}