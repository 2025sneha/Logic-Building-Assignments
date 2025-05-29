/* Write a program which accpet width and height of Rectangle from user and calculate its area.
(Area = Width * Height)

Input  : 5.3
output : 51.834

*/

#include<stdio.h>

double ReactArea(float fwidth, float fheight)
{

    float Area = 0.0;
    Area = (fwidth * fheight);

    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1, fValue2);

    printf("Area of rectangle is : %f",dRet);

    return 0;
}