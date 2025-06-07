/* Accept N numbers from user and display all such elements which are multiplies of 11
Input : n = 6
        Elements : 85 66 3 55 93 88
output : 66 55 88

*/

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            printf("Divisible by 11 is  : %d\n  ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of  elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements \n ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements  %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    Display(p, iSize);

    free(p);

    return 0;
}