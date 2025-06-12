/* Write a program which accept string from user and accept one character.
Return index of last occurrence of that character

Input : Marvellous Multi OS
        M
output : 11

Input :  Marvellous Multi OS
         W
output : -1

Input :  Marvellous Multi OS
         e
output : 4
*/
#include<stdio.h>

int LastChar(char *str, char ch)
{
   int iCount = 0, iLastIndex = 0;

   if(str == NULL)
   {
       return -1;
   }

   while(*str != '\0')
   {
        if(*str == ch)
        {
            iLastIndex =  iCount;
        }

        str++;
        iCount++;
   }
   return iLastIndex;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",Arr);

    printf("Enter the character that you want to search  : ");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr, cValue);

    printf("Character location is %d ", iRet);

    return 0;
}