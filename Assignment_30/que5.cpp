/*write a program which checks whether first and last bit is ON or OFF.
  First bit means bit number 1 and last bit means bit number 32.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
bool CHKBit(UINT iNo)
{
    UINT iMask = 2147483649;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);
    
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = CHKBit(iValue);
    
    if(bRet == true)
    {
        cout<<"First and last bit is ON \n";
    }
    else
    {
        cout<<"First and last bit is OFF \n";
    }
    return 0;
}