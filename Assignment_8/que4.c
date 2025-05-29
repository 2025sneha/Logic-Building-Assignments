/* Write a program which accept temperature in fahrenheit and convert it into celsius.asm
(1 celsius = (Fahrenheit - 32) * (5/9))

Input  : 10
output : -12.2222 

Input  : 34
output : 1.11111

*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    float celsius = 0;

    celsius = (((float)fTemp - 32) * (5.0/9.0));

    return celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in faharenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius : %f\n",dRet);

    return 0;
}