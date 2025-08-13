// Write a recursive program which display below patern
// Input :  6
// output : A  B  C  D  E  F

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'A';
    
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