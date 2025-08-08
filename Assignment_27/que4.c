/* Write a program which accpet string from user and copy small characters of that string into another string.

Input : "Marvellous multi OS"

output : "arvellous multi"

*/

#include<stdio.h>

int StrCpySmall(char *src, char *dest)
{
    if(src == NULL)
    {
        return -1;
    }
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            *dest++;
        }
        src++;
    }
    return *dest;
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30] = {'\0'};

    StrCpySmall(arr,brr);

    printf("%s\n",brr);

    return 0;
}