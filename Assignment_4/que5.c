#include<stdio.h>
#define ERR_INVALID -1

int FactDiff(int iNo)
{
  int iCnt  = 0, iFactSum = 0, iNonFactSum = 0, iAns = 0;

    if(iNo < 0)
    {
    return ERR_INVALID;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
       if((iNo % iCnt)== 0)
       { 
            iFactSum = iFactSum + iCnt;
       }
       else
       {
            iNonFactSum = iNonFactSum + iCnt;
       }
    }  
    iAns = iNonFactSum - iFactSum;
    return iAns; 
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Difference between factors and non factor is : %d",iRet);
    }    
    return 0;
}