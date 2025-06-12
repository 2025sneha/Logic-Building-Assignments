/* Accept N number from user and accept Range, Display all elements from that range
Input : N = 6    Start = 60   End = 90
       Elements : 85 66 3 76 93 88
output : 66 76 88

*/
#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd )
{
    int iCnt = 0;

    if((Arr == NULL) && (iLength <= 0))
    {
        return -1;
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) &&(Arr[iCnt] <= iEnd))
        {
           printf("%d ",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    
    printf("Enter number of elements  : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter  %d elements : \n ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements  %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    printf("Enter starting point :  ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}