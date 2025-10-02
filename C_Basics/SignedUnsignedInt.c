#include <stdio.h>

int main()
{
    signed int a = -1;
    unsigned int b = -1; // stored as max unsigned value

    printf("Signed int: %d\n", a);
    printf("Unsigned int: %u\n", b);
    return 0;
}

// E:\Karan_codes\amiPrac>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc SignedUnsignedInt.c -o SignedUnsignedInt && "e:\Karan_codes\amiPrac\C_Basics\"\SignedUnsignedInt && del SignedUnsignedInt.exe
// Signed int: -1
// Unsigned int: 4294967295