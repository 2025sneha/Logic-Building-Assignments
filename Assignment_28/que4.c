/* Write application which accept file name from user and display size of file

Input : Demo.txt

output : File size is 56 bytes
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1014

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is successfully open with FD %d\n",fd);

        iRet = read(fd, Buffer, strlen(Buffer));

        printf("%d bytes gets read successfully\n",iRet);

        close(fd);
    }

    
    return 0;
}