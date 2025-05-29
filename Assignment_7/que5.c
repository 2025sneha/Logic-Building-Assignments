/*
Input  : 5
output : -7   (8 - 15)

Input  : -5
output : -7   (8 - 15)

Input : 10
output : 2895  (3840 - 945)

*/



#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenSum = 1, iOddSum = 1, iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)== 0)
        {
            iEvenSum = iEvenSum * iCnt;
        }
        else
        {
            iOddSum = iOddSum * iCnt;         
        }
    }
    iAns = iEvenSum - iOddSum;
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n",iRet);

    return 0;
}