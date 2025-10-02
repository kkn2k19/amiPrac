#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Char range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned Char range: 0 to %u\n", UCHAR_MAX);

    printf("Int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned Int range: 0 to %u\n", UINT_MAX);

    printf("Float range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Double range: %e to %e\n", DBL_MIN, DBL_MAX);

    return 0;
}

// e:\Karan_codes\amiPrac\C_Basics>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc Ranges.c -o Ranges && "e:\Karan_codes\amiPrac\C_Basics\"\Ranges && del Ranges.exe
// Char range: -128 to 127
// Unsigned Char range: 0 to 255
// Int range: -2147483648 to 2147483647
// Unsigned Int range: 0 to 4294967295
// Float range: 1.175494e-38 to 3.402823e+38
// Double range: 2.225074e-308 to 1.797693e+308 