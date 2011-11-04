#include <stdio.h>

void reverse(char * str);

int main(void)
{
    char *str = "hello";
    reverse(str);
    printf("%s",str);
    return 0;
}


void reverse(char * str)
{
    char *end=str;
    char temp;

    if(str){
        while(*end){
            ++end;
        }
        --end;  

        while(str < end){
            temp = *str;
            *str++ = *end;
            *end-- = temp;
        } 
    }
}

