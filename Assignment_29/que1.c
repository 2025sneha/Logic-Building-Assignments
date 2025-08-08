/* Write a program which accepts file name from user and count number of capital characters from that file

Input : Demo.txt
output : Number of capital character are 23
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1014

int CountCapital(char Fname[])
{
    int fd = 0;
    int iCapCount = 0, iCnt = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

   while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
    {
       for(iCnt =0; iCnt < iRet; iCnt++)
        {
           if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
           {
               iCapCount++;
           }
        }
       memset(Buffer, '\0', BUFFER_SIZE);
    }
    close(fd);

    return iCapCount;
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    if(iRet == -1)
    {
        printf("Unable to open file \n");
    }    

    printf("Number of capital character are %d\n ",iRet);
    

    return 0;
}