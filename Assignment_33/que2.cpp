/* Write a program which accepts two numbers from user and display position of common ON bits from that two numbers.

Input : 10     15    (1010  1111)
output : 2      4
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBit(UINT iNo1, UINT iNo2)
{
    UINT iMask = 1;
    int i = 1;

    while(i <= 32)
    {
        if(( iNo1 & iMask) && ( iNo2 & iMask))
        {
            cout<<i<<" ";
        }

        iMask = iMask<< 1;
        i++;
    }
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    cout<<"Enter first value : ";
    cin>>iValue1;

    cout<<"Enter second value : ";
    cin>>iValue2;

    CommonBit(iValue1, iValue2);

   return 0;
}