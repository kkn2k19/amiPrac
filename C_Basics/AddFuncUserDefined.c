#include <stdio.h>

int add(int a, int b)
{ // function definition
    return a + b;
}

int main()
{
    int x = 10, y = 20;
    printf("Sum = %d\n", add(x, y));
    return 0;
}

// e:\Karan_codes\amiPrac\C_Basics>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc AddFuncUserDefined.c -o AddFuncUserDefined && "e:\Karan_codes\amiPrac\C_Basics\"\AddFuncUserDefined && del AddFuncUserDefined.exe
// Sum = 30
