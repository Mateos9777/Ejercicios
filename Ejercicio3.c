#include <stdio.h>
#include <stdlib.h>

int main(void){

    int var;
    int *pvar = &var;

    printf("Var Direccion: %p\n", &var);
    printf("Pvar Direccion: %p\n", &pvar);
    printf("Pvar Contenido: %p \n", pvar);

    return 0;
    
}