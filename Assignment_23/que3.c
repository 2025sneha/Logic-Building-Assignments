/* Accept character from user. If it is capital then display all the character from the input character till Z.
If input character is small then print all the character in reverse order till a. In other cases return directly

Input : Q
output : Q  R S  T U  V  W  X  Y  Z

Input : m
output : m l k j i h g f e d c b a

Input : 8
output : 

*/

#include<stdio.h>

void Display(char ch)
{
    int cCount = 0, iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    } 
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        printf("\n");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}