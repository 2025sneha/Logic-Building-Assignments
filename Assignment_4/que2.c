/*

Input  : 12
Output : 6  4  3  2  1

Input  : 13
output : 1

Input  : 10
output : 5  2  1

*/

#include<stdio.h>
#define ERR_INVALID -1

int FactRev(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }
    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt)== 0)
        {
           iFact = iNo * iNo;
           printf("%d ",iCnt);
        }
    }
    return iFact;
}

int main()
{  
    int iValue = 0, iRet = 0 ;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactRev(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input \n");
    }
    else
    {
        printf("\nFactors is :%d",iRet);
    }
    return 0;
}