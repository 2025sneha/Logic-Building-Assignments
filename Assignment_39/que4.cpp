/* Write generic program to accept N values and search last occurrence of any specific values 
Input : 10  20  30  10  30  40 10  40  
value to search : 40
output : 8
*/

#include<iostream>
using namespace std;

template<class T>
int searchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0, iValue = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iValue++;
        }
    }
    return iValue;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = searchLast(arr,9,40);

    cout<<iRet<<"\n";

    return 0;
}