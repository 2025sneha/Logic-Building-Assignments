/* Write gneric program which accept one value and one number from user. Print that value that number of times on screen.
Input : M    7
output : M  M  M  M  M  M

Input : 11  3
output : 11  11  11

Input : 3.7  6
output : 3.7  3.7  3.7  3.7  3.7  3.7 
 
*/

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout<<value<<" ";
    }
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}