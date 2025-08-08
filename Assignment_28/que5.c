/* Write application which accept file name from user and one string from user. Write that string at the end of file
 
Input : Demo.txt
        Hello world

output : Write Hello World at the end of Demo.txt file
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
    
    printf("Enter the file  name that you want to open : ");
    scanf("%s",Fname);

    while(getchar() != '\n');
    
    printf("Enter the data that you wants to add in file : ");
    scanf("%[^\n]",Buffer);

    fd = open(Fname, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        iRet =  write(fd, Buffer, strlen(Buffer));

       if(iRet == -1)
       {
           printf("Unable to write to the file \n");
       }
       else
       {
           printf("Successfully wrote %d btyes at the end of %s\n",iRet,Fname);
       }

        close(fd);
    }
    return 0;
}