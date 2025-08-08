/* Write a program which accepts file name and one count from user and read that number of characters from starting position

Input : Demo.txt      12
outout : Display first 12 characters from Demo.txt

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define BUFFER_SIZE 1014

void DisplayN(char Fname[], int iSize)
{
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
      printf("Unable to open the file \n");
      return;
    }

    iRet = read(fd, Buffer,iSize);

    printf("Display first %d characters from %s",iRet,Fname);
}

int main()
{
    char FileName[30];
    int iValue = 0 ;

    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter the number of characters : ");
    scanf("%d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}

