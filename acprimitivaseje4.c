#include <stdio.h> 

int main(){
    
    int MESES_TOTAL= 12;
    int cantidad_mascotas =0 ;
    float kg_mensual= 0.0;
    float costo=0; 
    float gasto_total=0;
    
    printf("Indique cuantas mascotas tiene\n");   
    scanf("%i", &cantidad_mascotas);
    if (cantidad_mascotas == 0){
        printf("Adios\n");
        return 0;
    };
    printf("Indique cuantos kg come su mascota en un mes:\n");
    scanf("%.1f",&kg_mensual);
    printf("Cuanto cuesta el kg?\n");
    scanf("%.1f",&costo);
    gasto_total= (kg_mensual*costo)*MESES_TOTAL* cantidad_mascotas;
    printf("%i mascota gasta %.1f en %i meses\n", cantidad_mascotas, gasto_total, MESES_TOTAL);
 
    return 0; //fin
}