/* Write generic program to accept N values and search first occurrence of any specific value.
Input : 10  20  30  10  30  40  10  40  10
value to search : 40
output : 6
*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr, 9, 40);

    cout<<iRet<<"\n";

    return 0;
}

