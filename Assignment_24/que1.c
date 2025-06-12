/* Write a program which accept string from user and count number of capital character
Input :   Marvellous Multi OS
output : 4

*/
#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0, iCount = 0;

    if (str == NULL)
    {
        return -1;
    }
  
    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
          iCount++;          
       }
       str++;
    }
    return iCount;
}
int main()
{
    char arr[25];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}    