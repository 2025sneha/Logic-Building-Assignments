/* Write a program which accept string from user and display it in reverse order
Input : MarvellouS
output : SuollevraM

*/
#include<stdio.h>

void Reverse(char *str)
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);

    return 0;
}