/* Accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO
Input :  N = 6    NO = 66
         Elements : 85 66 3 66 93 88
output : 3

Input : N = 6    NO = 12
        Elements : 85 66 3 66 93 88
output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iLastOcc = -1;

    if((Arr == NULL) && ( iLength <= 0))
    {
        return -1;
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastOcc =  iCnt;
        }
    }
    return iLastOcc;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of element : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number that you want to search : ");
    scanf("%d",&iValue);


    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There os no such number ");
    }
    else
    {
       printf("Last occurrence of number is  %d ",iRet);
    }
    free(p);
    return 0;

}