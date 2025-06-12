/* write a program which accept string from user and accept one character. Check
whether that character is present in string or not

Input : Marvellous Multi OS
        e
output : TRUE

Input : Marvellous Multi OS
         W
output : FALSE         
         
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CHKChar(char *str, char ch)
{
   if(str == NULL)
   {
       return -1;
   }
   
   while( *str != '\0')
   {
       if(*str == ch)
       {
          return TRUE;
       }
       else
       {
           return FALSE;
       }
   }
}
int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = CHKChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    return 0;
}