// Write a recursive program which accept string from user and count white spaces
// Input : HE llo WOr ID     output : 3

#include<stdio.h>

int Whitespace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        Whitespace(str);
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Whitespace(Arr);

    printf("White spaces are : %d",iRet);

    return 0;

}