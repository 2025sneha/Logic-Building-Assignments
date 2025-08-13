// Write a recursive program which accept number from user and return smallest digit
// Input :  87983   output : 3

#include<stdio.h>

int Min(int iNo)
{
    static int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin =  iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    
    printf("Minimum value is : %d",iRet);

    return 0;

}