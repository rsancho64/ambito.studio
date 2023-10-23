/*
    ambito global, local y sombreo
*/
#include <stdio.h>

int global = 11;

int aumenta(void)
{
    printf("  ++0: %d\n", global);
    global++;
    printf("  ++F: %d\n", global);
    return 0;
}

int disminuye(void)
{
    printf("  --0: %d\n", global);
    global--;
    printf("  --F: %d\n", global);    
    return 0;
}

int main(int)
{
    printf("main0: %d\n", global);
    aumenta();
    disminuye();
    printf("mainF: %d\n", global);
}
