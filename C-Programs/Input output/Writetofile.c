#include<stdio.h>

void main()

{
    FILE *file = fopen("C:\\mayank.txt","w");

    if(file == NULL)
   {
    printf("Failed to open file.\n");
   }
   fprintf(file, "Hello,World!\n");

   printf("data write in your file success...");

   fclose(file);
   
}