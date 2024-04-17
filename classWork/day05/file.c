#include<stdio.h>
int main(){
    int a,b;
    char ch;
    char Name[20];

    scanf("%d%d%s",&a,&b,&Name[0]);
    scanf("%c",&ch);
    printf("\nValues scanned\n");
    printf("\n%d\t%d\t%s\t%c",a,b,Name,ch);
    printf("\n\n");
    return 0;



}
    