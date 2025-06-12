/* Write a program which accept string from user and accept one character. 
Return frequency of that charater

Input : Marvellous Multi OS
         M
output : 2

Input : Marvellous Multi OS
        W
output : 0        

*/
#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that you wants to search  : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Character frequency %c is %d ", cValue ,iRet);

    return 0;
}