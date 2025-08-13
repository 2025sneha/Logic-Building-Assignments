// Write a recursive program which accept number from user and return largest digit
// Input : 87983   output : 9

#include<stdio.h>

int Max(int iNo)
{
   static int iMax = 0;
   static int iDigit = 0;

   if(iNo != 0)
   {
        iDigit = iNo % 10;
        
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }   
        iNo = iNo / 10;
        Max(iNo);
   }
   return iMax;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Maximum value is : %d",iRet);

    return 0;
}