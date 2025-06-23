#include <stdio.h>

int main(int argc, char ** argv)
{
    int numero = -500;
    unsigned int numero_sin_signo = 4294967280;
    float numero_con_punto_decimal = 0.001;
    char * texto = "Esta es una cadena de texto definida en una variable.";
    
    printf("Hola, esta es una cadena de texto\n");

    // Impresion de numero con signo:
    printf("El valor del numero es: %d\n", numero);
    
    // Impresion de numero sin signo:
    printf("El valor del entero sin signo es: %u\n", numero_sin_signo);

    // Impresion de un valor con punto decimal:
    printf("El valor del numero con punto decimal es: %f\n", numero_con_punto_decimal);

    // Impresion de texto por variable:
    printf("%s\n", texto);
    return 0;
}