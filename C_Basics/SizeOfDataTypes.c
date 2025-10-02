#include <stdio.h>

int main()
{
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    return 0;
}

// E:\Karan_codes\amiPrac>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc SizeOfDataTypes.c -o SizeOfDataTypes && "e:\Karan_codes\amiPrac\C_Basics\"\SizeOfDataTypes && del SizeOfDataTypes.exe
// Size of char: 1 byte
// Size of int: 4 bytes
// Size of short: 2 bytes
// Size of long: 4 bytes
// Size of long long: 8 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of long double: 16 bytes