#include <stdio.h> 

#define MSJ_TEXTO "hola, me costo un monton esto!!!! :O "

int main(){
    int ANIOS_TIERRA =7; 
    int horas_en_gargantua= 1; 
    int son_anios_cooper=0;
    
    printf("Escriba cuantas horas estuvo en Gargantua\n");
    scanf("%i", &horas_en_gargantua) ;
    son_anios_cooper = horas_en_gargantua * ANIOS_TIERRA;
    printf("Han pasado %i anios Cooper!!!\n ", son_anios_cooper ); 
    
    return 0; 
}