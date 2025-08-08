/* write a program which accept string from user and copy capital character of that string into another string

Input : Marvellous Multi OS
output : MMOS

*/
#include<stdio.h>

int StrCpyCap(char *src, char *dest)
{
    if(src == NULL)
    {  
        return -1;
    }

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
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
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrCpyCap(arr, brr);

    printf("%s\n",brr);

    return 0;
}


