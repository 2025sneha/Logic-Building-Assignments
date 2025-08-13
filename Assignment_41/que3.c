// Write a recursive program which display below pattern.
// Input : 5
// output : 5  4  3  2  1

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}