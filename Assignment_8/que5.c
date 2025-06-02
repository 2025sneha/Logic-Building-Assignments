/* Write a program which accept area in square feet and convert it into square meter
(1 square feet = 0.0929 square meter)
Input  : 5
output : 0.464515

Input  : 7
output : 0.650321

*/
#include<stdio.h>
double SquareMeter(float fNo)
{
    float fCnt = 0;
    fCnt = (fNo * 0.0929);

    return fCnt;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area of meter :%f",dRet);

    return 0;
}