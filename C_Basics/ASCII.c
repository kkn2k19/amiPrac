#include <stdio.h>

int main()
{
    unsigned char c;
    for (c = 65; c <= 90; c++)
    { // ASCII for A–Z
        printf("%c = %d\n", c, c);
    }
    return 0;
}

// e:\Karan_codes\amiPrac\C_Basics>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc ASCII.c -o ASCII && "e:\Karan_codes\amiPrac\C_Basics\"\ASCII && del ASCII.exe
// A = 65
// B = 66
// C = 67
// D = 68
// E = 69
// F = 70
// G = 71
// H = 72
// I = 73
// J = 74
// K = 75
// L = 76
// M = 77
// N = 78
// O = 79
// P = 80
// Q = 81
// R = 82
// S = 83
// T = 84
// U = 85
// V = 86
// W = 87
// X = 88
// Y = 89
// Z = 90