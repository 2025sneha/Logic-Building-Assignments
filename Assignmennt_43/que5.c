// Write a recursive program which accept number from user and return its reverse number
// Input : 523    output :  325

#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is : %d",iRet);

    return 0;
}