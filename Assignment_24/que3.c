/* Write a program which accept string from user and return difference between frequency of small 
characters and frequency of capital characters

Input : MarvellouS
output : 8 (10 - 2)

*/
#include<stdio.h>

int Difference(char *str)
{
    int iCapCount = 0, iSmallCount = 0, iResult = 0;
     
    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str == 'Z'))
        {
            iCapCount++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        str++;  
    }
    iResult =  iSmallCount - iCapCount;
    return iResult;
}    
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}