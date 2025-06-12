/* Write a program which accept string from user and count number of small character.

Input : Marvellous
output : 9
*/
#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0, iCount = 0;

    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
       {
           iCount++;
       }
       str++;
    }
    return iCount++;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}