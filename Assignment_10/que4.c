/* Write a program which accept numbers from user return multiplication of all digits

Input  : 2395
output : 270

Input  : 1018
output :0

*/

#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0, iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}