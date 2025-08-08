/* Write a program which accepts file name from user and count number of small characters from that file

Input : Demo.txt
Output : Number of small character are 21

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1014

int CountSmall(char Fname[])
{
    int fd = 0, iSmallCount = 0, iCnt = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file \n");
    }

    while((iRet = read (fd, Buffer, BUFFER_SIZE)))
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
            {
                iSmallCount++;
            }
        }
        memset(Buffer, '\0', BUFFER_SIZE);
    }
    close(fd);
    return iSmallCount;

}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    if(iRet == -1)
    {
        printf("Unable to open file \n");
    }

    printf("Number of small characters are %d\n",iRet);

    return 0;
}