#include <stdio.h>

void printValue(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        printf("Int : %d\n", *(int *)ptr);
        break;
    case 'f':
        printf("Float : %f\n", *(float *)ptr);
        break;
    case 'c':
        printf("Char : %c\n", *(char *)ptr);
        break;
    }
}

int main()
{
    int x = 10;
    float y = 3.14f;
    char z = 'A';

    printValue(&x, 'i');
    printValue(&y, 'f');
    printValue(&z, 'c');
}

// e:\Karan_codes\amiPrac\C_Basics>cd "e:\Karan_codes\amiPrac\C_Basics\" && gcc Void.c -o Void && "e:\Karan_codes\amiPrac\C_Basics\"\Void && del Void.exe
// Int : 10
// Float : 3.140000
// Char : A