
/* 
Input : 2
output : 2 4 6 8 10 12 14 16 18 20

Input  : -5
output :  5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("  %d\n ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}