// Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template<class T>
T  Max(T iNo1, T iNo2, T iNo3)
{
    if((iNo1 >= iNo2) && (iNo2 >= iNo3))
    {
        return iNo1;   
    }
    else if ((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
       return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0,iRet = 0 ;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;

    cout<<"Enter third number : ";
    cin>>iValue3;
    
    iRet = Max(iValue1, iValue2, iValue3);

    cout<<"Maximum number is : "<<iRet<<"\n";

    return 0;
}