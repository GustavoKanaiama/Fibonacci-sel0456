#include "fib_recursivo.h"

int fib_recursivo(int n){

    //Caso base quando n vale 0
    if(n == 0){
        return 0;
    }

    //Caso base quando n vale 1
    if(n == 1){
        return 0;
    }

    //Caso base quando n vale 2
    if(n == 2){
        return 1;
    }

    return fib_recursivo(n-1) + fib_recursivo(n-2);
}