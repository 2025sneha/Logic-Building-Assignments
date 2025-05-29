/* 
Input  :  5
output :  5 * 4 * 3 * 2 * 1

Input  : -5
output : 5 * 4 * 3 * 2 * 1

Input  : 4
output : 4 * 3 * 2 * 1
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
     iFact = iFact * iCnt;
     
      
     if(iCnt == 1)
     {
        printf("%d ",iCnt);
     }
     else
     {
        printf("%d *",iCnt);
     }
    }
   return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("\nFactorial of number is : %d",iRet);

    return 0;
}