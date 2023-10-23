/*
    ambito global, local y sombreo
*/

#include <stdio.h>

int var0 = 11; // var0 GLOBAL

int f(void)
{
    int var0 = 22; // var0 local a f
    int varF = 44; // varF local a f 
    printf("aqui vale: %d\n", var0); // alcanzo la local a f
    return 0;
}

int main(int)
{
    printf("vale: %d\n", var0); // alcanzo la global
    int var0 = 33; // var0 LOCAL (A MAIN)
    printf("vale: %d\n", var0); // local sombrea global
    f();
    // printf("vale: %d\n", varF); // no alcanza la f::    
}
