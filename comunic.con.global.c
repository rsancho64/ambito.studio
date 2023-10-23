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
    global--;
    return 0;
}

int main(int)
{
    printf("main0: %d\n", global);
    global = aumenta();  // ya es una funcion
    printf("main0: %d\n", global);    
    disminuye();         // todavia es un procedimiemto
    printf("mainF: %d\n", global);
}
