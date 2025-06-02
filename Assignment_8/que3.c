/* Write a program which accept distance in kilometer and convert it into meter.asm
(1 kilometer = 1000 Meter)

Input  : 5
output : 5000

Input  : 12
output : 12000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iCnt = 0;
    iCnt = iNo * 1000;

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is :%d",iRet);

    return 0;
}