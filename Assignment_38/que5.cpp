// Write generic program to accept N value from user and return smallest value 

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T Min = 0;
    int iCnt = 0;

    Min = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }
    return Min;

}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);

    cout<<iRet<<"\n";

    float fRet = Min(brr, 4);

    cout<<fRet<<"\n";

    return 0;

}