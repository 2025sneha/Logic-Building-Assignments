/* Aceept N number from user and accept one another number as NO, return index of first occurrence of that NO
Input :  N = 6    NO = 66
         Elements : 85 66 3 66 93 88
output : 1

Input :  N = 6       NO = 12
         Elements : 85 11 3 15 11 111
output : -1         

*/
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],  int iLength, int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) && (iLength <= 0))
    {
        return -1;
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
        return -1;
    
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements  : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements  : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number you want to search : ");
    scanf("%d",&iValue);

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is %d ", iRet);
    }
    free(p);

    return 0;
}