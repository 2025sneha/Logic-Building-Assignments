/*
Input  : 4
output : 4  8  12  16  20
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
