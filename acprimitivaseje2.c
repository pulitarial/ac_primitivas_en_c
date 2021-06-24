#include <stdio.h> 


int main(){
    int cantidad_estudiantes_presentes =0; 
    int CANTIDAD_TOTAL_ESTUDIANTES= 15;
    
    
    printf("Ingrese la cantidad de alumnos que asistieron hoy a clase\n");    
    scanf("%i", &cantidad_estudiantes_presentes);
    printf("Hoy se duermieron %i estudiantes\n", (CANTIDAD_TOTAL_ESTUDIANTES - cantidad_estudiantes_presentes));
    

    return 0; //fin
}