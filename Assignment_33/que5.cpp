/* Write a program which accepts one number from user and range of positions from user. Toggle all bits from that range
Input : 897    9   13

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 1;
    UINT iResult = 0;
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | ( 1 << (iStart - 1));
    }
    iResult = iNo ^ iMask;
   
    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0, iLocation1 = 0, iLocation2 = 0;

    cout<<"Enter the value : ";
    cin>>iValue;

    cout<<"Enter first position : ";
    cin>>iLocation1;

    cout<<"Enter second position : ";
    cin>>iLocation2;

    iRet =  ToggleBitRange(iValue, iLocation1, iLocation2);

    cout<<"Updated value is : "<<iRet<<"\n";

    return 0;
}