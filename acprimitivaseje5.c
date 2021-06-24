#include <stdio.h> 

int main(){
    
    float CONVERSION_BIT_A_BYTE= 0.125;
    float velocidad_promocionada= 0.0;
    float velocidad_real= 0.0;
    
    printf("Introdusca la velocidad contratada según publicidad\n");    
    scanf("%f",&velocidad_promocionada);
    velocidad_real = velocidad_promocionada * CONVERSION_BIT_A_BYTE;
    printf("En realidad te estan vendiendo una velocidad de %.1f MB/S\n", velocidad_real);
   
    return 0; //fin
}