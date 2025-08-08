/* Write application which accept file name from user and read all data from that file and display contents on screen

Input : Demo.txt

output : Display all data of file
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define BUFFER_SIZE 1014

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};

    printf("Enter file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("unable to open file \n");
        return -1;
    }
    else
    {
        printf("File is successfully open with FD : %d\n",fd);

        iRet = read(fd, Buffer, sizeof(Buffer));

        printf("%d bytes from file is \n",iRet);

        printf("Data from file is : %s\n",Buffer);

        close(fd);

    }
    return 0;
    
}