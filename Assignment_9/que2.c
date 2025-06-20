/* Write a program which accept number from user and check whether it contains 0 in it or not.asm

input  : 2395
output :Tjere is no zero

Input  : 1018
output :it contains zero

Input  : 9000
output : It contains zero

Input  :10687
output  : It contains zero

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
     int iDigit = 0; 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
           return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}