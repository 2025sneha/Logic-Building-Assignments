/*Write a program which accept string from user and accept one character .
Return index of first occurrence of that character

Input : Marvellous Multi OS
        M
output : 0

Input : Marvellous Multi OS
        W
output : -1

Input : Marvellous Multi OS
       e
output : 4        
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
      int iCount  = 0;
      
     if(str == NULL)
     {
        return -1;
     }   

     while(*str != '\0')
     {
        if(*str == ch)
        { 
            return iCount; 
        }
        str++;
        iCount++;
    }

}
int main()
{
    char Arr[20];
    char cValue = '\0';
     int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",Arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}