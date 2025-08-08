/* Write a program which accepts file name and one characters from user and count number of occurrences of that characters from that file

Input : Demo.txt      'M'
output : Frequency of M is 7
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1014

int CountChar(char Fname[], char ch)
{
    int fd =0, iCount = 0, iCnt = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1;
    }

    while((iRet = read (fd, Buffer, BUFFER_SIZE)))
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if(Buffer[iCnt] == ch)
            {
                iCount++;
            }
        }
        memset(Buffer, '\0',BUFFER_SIZE);
    }
    close(fd);

    return iCount;
}
int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = {'\0'};

    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName, cValue);
    
    printf("Frequency is %d",iRet);

    return 0;

}