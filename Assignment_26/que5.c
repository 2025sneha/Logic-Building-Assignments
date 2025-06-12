/* write a program which accept string from user reverse that string in place

Input : abcd
output : dcba

Input : abba
output : abba

*/

#include<stdio.h>

void StrRevX(char *str)
{
   int iCount = 0;
   char *start = NULL;

   start = str;

   while(*str != '\0')
   {
       iCount++;
       str++;
   }
   str--;

   while(str >= start)
   {
       printf("%c",*str);
       str--;
   }
   printf("\n");
}
int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);


   StrRevX(Arr);

    printf("Modified string is %s",Arr);

    return 0;

}