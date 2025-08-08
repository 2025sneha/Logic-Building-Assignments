// Write generic program to multiply two numbers

#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1, T no2)
{
    T iResult = 0;

    iResult = no1 * no2;

    return iResult;
}


int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    
    iRet = Multiply(10,20);

    cout<<iRet<<"\n";
  
    fRet = Multiply(10.23f, 20.67f);

    cout<<fRet<<"\n";
    
    return 0;
}