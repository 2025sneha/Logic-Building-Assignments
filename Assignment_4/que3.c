/*
Input  : 12
output : 5  7  8  9  10 11

Input  : 13
output : 2  3  4  5  6  7  8  9  10  11  12

Input  : 10
Output  : 3  4  6  7  8  9

*/
#include<stdio.h>
#define ERR_INVALID -1

int NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID;    
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!= 0)
        {
            printf("%d  ",iCnt);
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}