/* Write a program which accpets numbers from users and display its digits in reverse order

Input  : 2395        Input  : -1018
output : 5           output :8
         9                   1
         3                   0
         2                   1

Input  :1018
output :8
        1
        0
        1       

*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}