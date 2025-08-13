// Write a recursive program which display below pattern
// output : A  B  C  D  E  F

#include<stdio.h>

void Display(char ch)
{
    if(ch > 'F')
    {
        return;
    }    
        printf("%c\t",ch);
        
        Display(ch + 1);
    

}
int main()
{
    Display('A');

    return 0;
}