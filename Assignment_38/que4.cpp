// Write generic program to accept N values from user and return largest values

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T  Max = 0;
    int iCnt = 0;

    Max = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > Max)
        {
            Max = arr[iCnt];
        }
    }
    return Max;
    
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 30.7, 9.8, 8.7};

    int iRet = Max(arr,5);

    cout<<iRet<<"\n";

    float fRet = Max(brr, 4);

    cout<<fRet<<"\n";

    return 0;
}
