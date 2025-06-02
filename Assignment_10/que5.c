/* Write a program which accept number from user and return difference between summation of even digits and summation of odd digits

Input  :2395
output :-15    (2-17)

Input  : 1018
output : 6    (8-2)

*/
#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0, iAns = 0;

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
           iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
     iAns = iEvenSum - iOddSum;
    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}