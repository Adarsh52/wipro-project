#include<stdio.h>
 #include<string.h>

 void compressString(char *str){
    int len = strlen(str);
    if(len == 0)
    return;

    int count = 1;
    for(int i =1; i<= len; i++){
        if(str[i] == str[i - 1]){
            count++;
        } else {
            printf("%c", str[i - 1]);
            if (count > 1)
            {
               printf("%d", count);
            }
            count = 1;
        }
    }
 }

 int main(int argc, char *argv[])
 {
    if(argc != 2){
        printf("usage: %s <string>\n" ,argv[0]);
        return 1;
    }

    compressString(argv[1]);
    printf("\n");

    return 0;

 }
