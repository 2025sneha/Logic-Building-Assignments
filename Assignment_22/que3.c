/* Accept character from user and check whether it is digit or not
(o-9)
Input : 7
output : TRUE
Input : d
output : FALSE

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CHKDigit(char ch)
{
    if((ch >= '0') &&( ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the digit : ");
    scanf("%c",&cValue);

    bRet = CHKDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not digit");
    }
    return 0;
}