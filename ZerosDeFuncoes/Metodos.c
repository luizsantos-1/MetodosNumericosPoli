#define MAX_N  10000
#define EPSILON  0.1

#include "Metodos.h"

float Bissecao(float a, float b, int n){
   float p = (a+b)/2;
   if (f(p) <= EPSILON || n > MAX_N) return p;
    
    else if (p*a < 0.0) Bissecao(a, p, n+1);

    else if (p*b < 0.0) Bissecao(p, b, n+1);

    else {

    } // ERRO
} 