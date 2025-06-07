/* Accept N number from user and return frequency of 11 form it
Input = n : 6
        Element : 85 66 3 15 93 88

output : 0

Input = n : 6
        Element : 11 11 3 15 93 111

output : 2

*/

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if( Arr[iCnt] == 11)
      {
        iCount++;
    
      }
   }
   return iCount;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    
    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory \n") ;
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);
    
    printf("%d", iRet);

    free(p);
    return 0;
}