/* Write generic program to accept N values and reverse the contents.

Input :  10  20  30  10  30  40  10  40  10
output : 10  40  10  40  30  10  30  20  10
*/

#include<iostream>
using namespace std;

template<class T>
int Reverse(T *arr, int iSize)
{
    int iCount = 0, iCnt = 0;
    T *start = NULL;

    start = arr;
   
    while(*arr != '\0')
    {
        iCount++;
        arr++;
    }
    arr--;

    while(arr >= start)
    {
        arr--;
    }
    cout<<"\n";

    return arr;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

    Reverse(arr,9);

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}