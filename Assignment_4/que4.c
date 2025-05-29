/*
Input  : 12
output : 50

Input  :10
output : 37

*/

#include<stdio.h>
#define ERR_INVALID -1

int SumNonFact(int iNo)
{
   int iCnt = 0, iSum = 0;

   if(iNo < 0)
   {
    return ERR_INVALID;
   }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       if((iNo % iCnt) != 0)
       {
           iSum = iSum + iCnt; 
       }
   }   
   return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Sum of Non Factors are :%d",iRet);

    return 0;
}