/*
 * calculos.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Tukic
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "MenuOpciones.h"

float optionUno()
{
	float km;
	printf("\nIngrese la cantidad de kilometros del viaje.\n\n");
    km=datosFlotantes(1,900000);
    printf("\n La cantidad de kilometros ingresada es:  %.2f ",km);

    return km;
}
float optionAerolineas()
{
	float aerolineas;
    printf("\nIngrese el costo del vuelo de << Aerolineas>> : \n\n");
	aerolineas=datosFlotantes(1,2000000);
	return aerolineas;
}
float optionLatam()
{
	float latam;
    printf("\nIngrese el costo del vuelo de << Latam >> : \n\n");
	latam=datosFlotantes(1,2000000);
    return latam;
}

int optionTres(float km, float aerolineas, float latam, int flag)
{
	if(flag==0){
	    	if(km==0 && aerolineas==0 && latam==0){
	    		printf("\n");
	    		printf("\n\t[ ERROR. No hay ningun dato cargado. ]\n\n\n");

	    	}
	    	else if(km==0 || aerolineas==0 || latam==0){
	    		printf("\n");
	    		printf("\n No hay datos de : ");
	    		if(km==0){
	    			printf("\n - Kilometros.");
	    		}
	    		if(aerolineas==0){
	    					printf("\n - Precio de vuelo aerolineas.");
	    		}
	    		if(latam==0){
	    					printf("\n - Precio de vuelvo latam .");
	    		}

	    	}
	    	else{
	    		calculosListos(1);
	    		printf("\n\n");
	    		return 1;
	    	}
	    }
	    else{
	        calculosListos(1);
	        printf("\n\n");
	    	return 1;
	    }
		return 0;
}
int optionCuatro(int flag)
{
	if(flag==0){
			printf("\n");
			printf("\n\t[ ERROR. Faltan cargar datos y  { calcular } ].\n\n\n");
			return 0;
		}
		else{
			return 1;
		}
		return 0;
}

void calculosListos (int flag)
{
	if(flag==1){
			printf("\n \n  CALCULADO!!!!  \n \n ");
		}
}
int datosEnteros (int numA, int numB)
{
	    int flag;
	    int numero;

	    do{
	            if(flag==1){
	                printf("\nError. Ingrese solo numeros, dentro del rango .\n");
	                flag=0;
	            }

	           	printf("rango a ingresar:  %d  a  %d  ", numA, numB);
	           	scanf("%d",&numero);

	            if(numero<numA || numero>numB){
	                flag=1;
	            }
	    }while(flag==1);

	   	return numero;
}
float datosFlotantes(int numA, int numB)
{
	    int flag;
	    float numero;
	    int error;

	    do{
	            if(flag==1){
	                printf("\nError.Ingrese solo numeros, dentro del rango");
	                flag=0;
	            }

	           	printf("Rango a ingresar: %d  a  %d  ", numA, numB);

	           	scanf("%f",&numero);


	            if(numero<numA || numero>numB){
	                flag=1;
	            }
	    }while(flag==1);

	    return (float)numero;
}
float card (float precio, float promedio)
{
	float total;

		total=(precio + (precio*promedio));
        return total;
}
float precioKm (float precio , float km)
{
	float total;

		total=precio/km;
        return total;
}

void precioDiferencia (float aerolineas, float latam)
{
	float dif;

	    if(aerolineas>latam){
	        dif=aerolineas-latam;
	        printf("\t Latam  es más barato. La diferencia es:  $%.2f ",dif);
	    }
	    else{
	        if(latam>aerolineas){
	            dif=latam-aerolineas;
	            printf("\t Aerolineas  es más barato. La diferencia es:  $%.2f ",dif);
	        }
	        else{
	            printf("\t  Ambos viajes cuestan lo mismo. No hay diferencia. ");
	        }
	    }

}
void forzado (int cargaForzada)
{
	if(cargaForzada==1){
			printf("\t DATOS FORZADOS!! ");
		}
}
void precioBtc (float precio)
{
	 float btc=4796793.92;
	 float total;

total=precio/btc;
printf("[ %.4f btc ]",total);
}


