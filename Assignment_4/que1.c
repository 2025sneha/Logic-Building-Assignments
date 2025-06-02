/*  Input : 12
    Output :  144   ( 1 * 2 * 3 * 4 * 6)

    Input : 13
    Output : 1   (1)

    Input : 10
    Output : 10  ( 1 * 2 * 5)

*/

#include<stdio.h>
#define ERR_INVALID -1

    int MulFact(int iNo)
    {
        int iCnt = 0, iFact = 1;

         if(iNo < 0)
        {
            return ERR_INVALID;
        }

        for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++ )
        {
            if((iNo % iCnt) == 0)
            {
                iFact = iNo * iNo; 
                printf("%d ", iCnt);
            }
        }
        return iFact;
    }


    int main()
    {
        int iValue = 0;
        int iRet = 0;

        printf("Enter number : ");
        scanf("%d", &iValue);

        iRet =MulFact(iValue);
        
        if(iRet == ERR_INVALID)
        {
           printf("Invalid input\n");
        }
        else
        {
           printf("\nFactorial is : %d\n ", iRet);
        }
        return 0;
    }
