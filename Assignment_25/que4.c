/* write a program which accept string from user and display only digits from that string
Input : marve89llous121
output : 89121

Input : Demo
output : 

*/
#include<stdio.h>

void Display(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
     
}
int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    Display(Arr);

    return 0;
}