/*
Input  : iRow = 3   iCol = 5
output : A  A  A  A  A
         B  B  B  B  B
         C  C  C  C  C
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';

    for(i = 1, ch = 'A' ; i <= iRow; i++, ch++)
    {
        for( j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
    
}  

int main()
{
    int iValu1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValu1, &iValue2);

    Pattern(iValu1, iValue2);

    return 0;
}