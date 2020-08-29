#include <stdio.h>

void disp()
{
    printf("\ndisp");
}

void print()
{
    disp();
    printf("\nIn print");
}

int main()
{
    print();
    return 0;
}
