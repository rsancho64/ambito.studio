/*
    ambito global, local y sombreo
*/
#include <stdio.h>

int global = 11;

int aumenta(void)
{
    return global + 1;
}

int disminuye(void)
{
    return global - 1;
}

int main(int)
{
    printf("main0: %d\n", global);
    global = aumenta();   // ya es una funcion
    printf("main0: %d\n", global);    
    global = disminuye(); // ya es una funcion
    printf("mainF: %d\n", global);
}
