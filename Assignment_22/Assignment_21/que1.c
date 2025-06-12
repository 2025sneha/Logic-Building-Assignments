/*Accept N number from user and return the largest number
Input :   N = 6
         Assignment = 85 66 3 66 93 88
output : 93

*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    if((Arr == NULL) && (iLength <= 0))
    {
        return -1;
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt]; 
        }
    }
    return iMax;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
  
    
    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p, iSize);
 
    printf("Largest Number is %d", iRet);

    free(p);

    return 0;
}