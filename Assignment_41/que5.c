// Write a recursive program which display below pattern
// Input : 6
// output : a  b  c  d  e  f

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo == 0)
    {
        return;
    }
    printf("%c\t",ch);
    ch++;
    Display(iNo -1);
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}