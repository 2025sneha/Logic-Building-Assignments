/* Write a program which accept string from user and convert it into upper Case
Input : Marvellous Multi OS
output : MARVELLOUS MULTI OS

*/
#include<stdio.h>

void strurpX(char *str)
{
   while( *str != '\0')
   {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str + ('A' - 'a');
        }
        str++;
   }
}
int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strurpX(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}