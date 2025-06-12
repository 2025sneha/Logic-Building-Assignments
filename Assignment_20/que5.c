/* Accpet N number from user and return product of all odd elements
Input :   N = 6
        Elements : 15 66 3 70 10 88
output : 45         

*/
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iOddSum = 0;

    if((Arr == NULL) &&(iLength <= 0))
    {
        return -1;
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return iOddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elments : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Product(p, iSize);

    printf("Product is %d", iRet);

    free(p);

    return 0;
}