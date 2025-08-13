// Write a recursive program which accept string from user and count number of small characters
// Input : HElloWOrlD   output : 5

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);

    printf("Small characters are : %d",iRet);

    return 0;
}