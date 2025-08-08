/* write a program which accept string from user and copy the contents of that string into another string 
(Implement strcpy() function)

Input : Marvellous Multi OS
output : Marvellous Multi OS

*/

#include<stdio.h>

int StrCpyX(char *src, char *dest)
{
    if(src == NULL)
    {
        return -1;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    return *dest;
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrCpyX(arr, brr);

    printf("%s\n",brr);

    return 0;
}