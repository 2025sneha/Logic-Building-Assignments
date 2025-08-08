/* Accept character from user and display its ASCII value in decimal, octal and hexadecimal format
Input : A
output : Decimal        65
         octal         0101
         Hexadecimal   0x41

*/

#include<stdio.h>

int main()
{
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    printf("ASCII value of %c is in decinmal  %d\n  octal %o\n and in Hexadecimal %x\n",cValue,cValue,cValue, cValue);

    return 0;
}