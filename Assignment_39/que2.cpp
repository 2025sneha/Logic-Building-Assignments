/* Write generic program to accept N values and count frequency of any specific value.
Input : 10  20  30  10 30  40  10  40  10

value to check frequency : 10

output : 4

*/

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
   int iCnt = 0, iCount = 0;

   for(iCnt = 0; iCnt <= iSize; iCnt++)
   {
        if(arr[iCnt] == iNo)
        {
            iCount++;
        }
   }
   return iCount;

}

int main()
{
   int arr[] = {10,20,30,10,30,40,10,40,10};

   int iRet = Frequency(arr,9,10); 

   cout<<iRet<<"\n";

   return 0;
}