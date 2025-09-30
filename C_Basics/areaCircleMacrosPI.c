#include <stdio.h>
#define PI 3.14159

int main()
{
    float r = 5.0;
    float area = PI * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}

// e:\Karan_codes\amiPrac\C_Basics>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc areaCircleMacrosPI.c -o areaCircleMacrosPI && "e:\Karan_codes\amiPrac\C_Basics\"\areaCircleMacrosPI && del areaCircleMacrosPI.exe
// Area = 78.54