//TRABAJO FINAL DE SARA CHIRIBOGA

/*PROPUESTA MAS VIABLE - En el gobierno está licitando la construcción de una carretera. Se tienen 5 empresas candidatas. 
Elabora un programa que pida el monto de las 5 cotizaciones. Enseguida se deberá descartar la más barata y la más cara, luego se deberá obtener el promedio de las que restan. 
El programa deberá mostrar en pantalla las cotizaciones que se eliminan y el promedio del resto de las cotizaciones. 
Debes pensar en una manera eficiente de descartar usando el menor número de condiciones posible (menos de 10).*/

#include <stdio.h>

int main(){
    int i; 
    float monto, promedio; //definicion de variables
    float montomayor = 0;
    float montomenor= 5000000000;
    float sumatoria = 0;

    for (i = 1; i < 6; i++)
    {
        printf("Ingrese el monto de la cotizacion de la empresa %i: ", i); //pedir el monto de cada empresa
        scanf("%f", &monto);

        while (monto < 10000 || monto > 5000000000) //permitir valores dentro de un rango
        {
            printf("Ingrese un valor valido: ");
            scanf("%f", &monto);
        }
        
        if (monto > montomayor){ //condicional que compara dentro del loop cada uno de los valores hasta                        
            montomayor = monto;  //encontrar el mayor de todos
        }

        if (monto < montomenor){ //Este encuentra el menor valor de todos
            montomenor = monto;
        }
        
        sumatoria = sumatoria + monto; //sumatoria que ayudara con el calculo del promedio
    }

    promedio = (sumatoria - montomayor - montomenor)/3; //calculo del promedio del monto de las 3 empresas restantes

    printf("--- COTIZACIONES EXCLUIDAS ---\n"); //imprimir resultados
    printf("Cotizacion mas costosa: %f USD\n", montomayor);
    printf("Cotizacion mas barata: %f USD\n", montomenor);
    printf("--- PROMEDIO DE COTIZACIONES RESTANTES ---\n");
    printf("Promedio: %f USD", promedio);   
}

