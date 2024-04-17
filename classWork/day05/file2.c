#include<stdio.h>
int main()
{
    /*char ch;
   // ch = getchar();
    ch = getc(stdin);
   // printf("\nch=\c",ch);
   putchar(ch);
   printf("\n\n");
   return 0;
   */
  char Name[20];
  fgets(Name,sizeof(Name)-1,stdin);
  // printf("\nName: %s",Name);
  puts(Name);
  printf("\n\n");
  return 0;

}