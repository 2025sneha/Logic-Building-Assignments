/* Write a program which accept string from user and check whether it contains vowels in it or not
INput : marvellous
output : TRUE

Input : Demo
output : TRUE

Input : xyz
output : FALSE

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int  BOOL;

BOOL CHKVOwel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')|| (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n']s",Arr);

    bRet = CHKVOwel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains vowels");
    }
    else
    {
        printf("There is no vowel");
    }
    return 0;
}