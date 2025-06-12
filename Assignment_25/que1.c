/* Write a program which accept string from user and convert it into lower case
Input : Marvellous Multi OS
output : marvellous multi os

*/
#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
    
}
int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    strlwrX(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}