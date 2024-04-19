#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
    if(argc !=2)
    {
        printf("Usage:%s <input_string>\n", argv[0]);
    }

    char *input = argv[1];
    int len = strlen(input);

    if(len <= 0)
    {
        printf("input string is empty.\n");
        return 1;
    }

    char current_char = input[0];
    int count = 1;

    printf("%c", current_char);
    for(int i = 1; i<len; i++)
    {
        if(input[i] == current_char)
        {
            count++;
        } else{
            printf("%d", count);
            current_char = input[i];
            count = 1;
            printf("%c", current_char);        }
    }
    printf("%d\n", count);

    return 0;
}
