/* Write a program which accept string from user and count number of white spaces
Input : MarvellouS
output : 0

Input : MarvellouS Infosystems
output : 1

Input : MarvellouS Infosystems by Piyush Manhar Khairnar
output : 5
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);
 
    iRet = CountWhite(Arr);
     
    printf("%d",iRet);

    return 0;
}