/* Write application which accept file name from user and open that file in read mode.

Input : Demo.txt
output : File opened successfully

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }

    printf("File is sucessfully open with FD %d\n",fd);

    close(fd);

    return 0;

}