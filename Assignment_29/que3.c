/* Write a program which accepts file name from user and count number of white spaces from that file

Input : Demo.txt
output : Number of white spaces are 13

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1014

int CountWhite(char Fname[])
{
    int fd = 0, iCountspace = 0, iCnt = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    
    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file \n");
    }

    while((iRet = read (fd, Buffer, BUFFER_SIZE)) > 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if(Buffer[iCnt] == ' ')
            {
                iCountspace++;
            }
        }
        memset(Buffer, '\0', BUFFER_SIZE);
    }
    close(fd);
    return iCountspace;
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    if( iRet == -1)
    {
        printf("Unable to open file \n");
    }

    printf("Number of white spaces are %d",iRet);

    return 0;
}