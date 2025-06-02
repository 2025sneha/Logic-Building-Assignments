/*
Input  : 5
output :  $  *  $  *  $  *  $  *  $  *

Input  : 3
output : $  *  $  *  $  *

Input  : -3
output : $  *  $  *  $  *

*/

#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt = 0;
   if(iNo < 0)
   {
       iNo = -iNo;
   }
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
        printf("$\t*\t", iCnt);
   }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}