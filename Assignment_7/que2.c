#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    iCnt = (iNo * 70);
    
    return iCnt;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}