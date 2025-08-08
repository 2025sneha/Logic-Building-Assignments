/*write a program which cgecks whether 7th & 15th & 21st, 28th bit is ON or OFF

*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CHKBit(UINT iNo)
{
   UINT iMask = 17842240;
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
        cout<<"7th, 15th, 21th & 28th bit is ON \n";
    }
    else
    {
        cout<<"7th, 15th 21th & 28th bit is OFF\n";
    }
    return 0;
}