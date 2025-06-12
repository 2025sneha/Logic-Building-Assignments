/* Accept character from user and check whether it is capital or not
(A-Z)
Input : F
output TRUE

Input : d
output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CHKCapital(char ch)
{
    if((ch >= 'A') &&(ch <= 'Z'))
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

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = CHKCapital(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }
    return 0;
}