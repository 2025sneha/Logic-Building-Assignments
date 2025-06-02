/*
Input  : 5
output : 8    ( 4  * 2)

Input  : -5
output : 8     (4  * 2)

Input  : 10
output : 3840   ( 10 * 8 * 6 * 4 * 2)

*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact =1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2)== 0)
        {
            iFact = iFact * iCnt;
            printf("%d ", iCnt);
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\nEven Factorial of number is : %d ",iRet);

    return 0;
}