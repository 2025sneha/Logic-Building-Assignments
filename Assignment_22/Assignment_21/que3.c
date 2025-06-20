/* Accept N number from user and return the difference between largest and smallest number
Input : N= 6
     Elements : 85 66 3 66 93 88
output : 90 (93 -3)     

*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0, iDiff = 0;
    int iMin = Arr[0];

    if((Arr == NULL ) && (iLength <= 0))
    {
        return -1;
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        iDiff = iMax - iMin;
    }
    return iDiff;

}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%D",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n", iSize);
    {
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            printf("Enter elements %d : ", iCnt + 1);
            scanf("%d", &p[iCnt]);
        }
    }
    
    iRet = Difference(p, iSize);
    
    printf("Difference is %d", iRet);

    free(p);

    return 0;
}