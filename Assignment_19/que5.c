/* Accept N number from user and accept one another number as NO, return frequency of NO from it
Input = n : 6     NO : 66
        Element : 85 66 3 66 93 88

output : 2

Input = n : 6     NO = 12
        Element : 11 11 3 15 93 111

output : 0

*/

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

     if((Arr == NULL) && (iLength <= 0))
     {
        return -1;
     }
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if( Arr[iCnt] == iNo)
      {
           iCount++;
      }
   }
   
   return iCount;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the number you want to search : ");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize, iValue);
    
    printf("%d", iRet);

    free(p);
    return 0;
}