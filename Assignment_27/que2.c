/* Write a program which accept string from user and copy the contents of that string into another string
(Implement strcpy() function)

Input : Marvellous Multi OS
         10

output : Marvellous

*/
#include<stdio.h>

int StrNCpyX(char *src, char *dest, int iCnt)
{
    if(src == NULL)
    {
        return -1;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
    }
    return *dest;

}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrNCpyX(Arr, brr, 10);
    printf("%s\n",brr);

    return 0;
}