#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments : %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}

// E:\Karan_codes\amiPrac\C_Basics>gcc ArgumentsCommandLine.c -o ArgumentsCommandLine

// E:\Karan_codes\amiPrac\C_Basics>ArgumentsCommandLine.exe hello world
// Number of arguments : 3
// argv[0] = ArgumentsCommandLine.exe
// argv[1] = hello
// argv[2] = world
