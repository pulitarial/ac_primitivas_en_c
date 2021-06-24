#include <stdio.h> //obligatoria para todos los proyectos que hagamos
#include <stdbool.h> //agrego el tipo de dato booleano

#define MSJ_TEXTO "hola, me costo un monton esto!!!! :O "

int main(){
    //inicio
    int numero_entero =10 ; // aca cree una variable de tipo numero entero con el comando int
    float numero_real= 2.3; //defini una variable de tipo de dato real
    char caracter = 'a'; //defini variable de tipo caracter
    bool variable_booleana= true; //defini una variable logica
    
    printf("Escribo una variable entera: %i \n", numero_entero);    
    printf("Escribo una variable real: %.1f\n", numero_real);
    printf("Escribo una variable caracter: %c \n", caracter ); 
    printf("Escribo una variable logica: %i \n", variable_booleana );
    printf("Escribo una 'variable' TEXTO: %s \n", MSJ_TEXTO);


    return 0; //fin
}