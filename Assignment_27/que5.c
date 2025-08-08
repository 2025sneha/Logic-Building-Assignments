/* Write a peogram which 2 string from user and concat second string after first string.

Input : "Marvellous Infosystem"
        "Logic Building"

output : "Marvellous Infosystem Logic Building"
        
*/

#include<stdio.h>

int StrCatX(char *src, char *dest)
{
    if(src == NULL)
    {
        return -1;
    }

    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;

    while(*dest != '\0')
    {
       *src = *dest;
       src++;
       dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosystem";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s\n",arr);

    return 0;
}