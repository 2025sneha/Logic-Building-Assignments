/* Input : 8
  output : 2 4 6 8 10 12 14 16

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iNum = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf("%d\t",iNum);
            iNum = iNum + 2;
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