/* Write a program which display ASCII table. Table contains symbol, Decimal,
Hexadecimal and octal representation of every member from 0 to 255
 
*/
#include<stdio.h>

void DisplayASCII()
{ 
    int iValue = 0;

    printf("Number in Decimal format : %d\n",iValue);
    printf("Number in octal format : %o\n",iValue);
    printf("Number in Hexadecimal format : %x\n",iValue);

}
int main()
{
    DisplayASCII();

    return 0;
}