#include "Metodos.h"
#include <stdio.h>

float f(float p){
    return p*p;
}

int main (){
    float resultado = Bissecao(-1.0 , 10.0, 0);
    printf ("%f", resultado);
    return 0;
}