/*
    ambito global, local y sombreo
*/
#include <stdio.h>


int aumenta(int x)
{
    return x + 1;
}

int disminuye(int x)
{
    return x - 1;
}

int main(int)
{
    int local = 11;
    printf("main: %d\n", local);
    local = aumenta(local);   // ya es una funcion
    printf("main: %d\n", local);    
    local = disminuye(local); // ya es una funcion
    printf("main: %d\n", local);
}

