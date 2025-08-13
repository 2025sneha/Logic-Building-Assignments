// Write a recursive program which accept number from user and display below pattern
// Input :   5
// output :   5  *  4  *  3  *  2  *  1  *

#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t*\t",i);
        i--;
        Display();
    }
}
int main()
{
    Display();

    return 0;

   
}