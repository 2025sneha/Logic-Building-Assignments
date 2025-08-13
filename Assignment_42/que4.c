// Write a recursive program which accept number from user and return its factorial
// Input :     5      output :  120

#include<stdio.h>

int Fact(int iNo)
{
    static int i = 1;
    static int iFact = 1;

    if(i <= iNo)
    {
        iFact = iFact * i;
        i++;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;

}