// Write a program which accept one number from user and toggle 7th bit of that number. Return modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT ipos)
{
    UINT iMask = 1;
    UINT iResult = 0;
    
    iMask = iMask<<(ipos - 1);
    iMask = iMask;
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue =0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the position : ";
    cin>>iLocation;

    iRet = ToggleBit(iValue, iLocation);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}