/* write a program which checks whether 5th & 18th bit is on or off

*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CHKBit(UINT iNo)
{
    UINT iMask = 144;
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
        cout<<"5th and 8th bit is ON  \n";
    }
    else
    {
        cout<<"5th and 8th bit is OFF \n";
    }
    return 0;
}



