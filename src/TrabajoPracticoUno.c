/*
 ============================================================================
 Name        : TrabajoPracticoUno.c
 Author      : Tukic, Leon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "MenuOpciones.h"
#include "calculos.h"

int main(void) {

	 setbuf(stdout, NULL);

	int option;
	int km = 0;
	int latam = 0;
	int aerolineas = 0;
	int flag = 0;
	int informes = 0;
	int forzada = 0;

	 while(option!=6){



        menu(km, aerolineas, latam, flag, informes, forzada);



        option=datosEnteros(1,6);

        printf("\nOpcion escogida: << %d >>\n\n ", option);

        ////////// SWITCH DE OPCIONES.

        switch(option){
            case 1:
            	km=optionUno();
            	forzada=0;
                break;
            case 2:

            	switch(datosEnteros(1,2)){
            		case 1:
            			aerolineas=optionAerolineas();
            			forzada=0;
            			break;
            		case 2:
            			latam=optionLatam();
            			forzada=0;
            			break;
            	}
                break;
            case 3:						//Opcion 3
            	flag=optionTres(km,aerolineas,latam,flag);
            	//Chequeo de cálculos previo. Si faltan datos mostrará error. Caso contrario, activará la bandera.
            	//El valor de la bandera es recogido en `menu()` para realizar los cálculos allí.
                break;
            case 4:
            	informes=optionCuatro(flag);		// Si el paso 3 calculó, muestra info. Caso contrario, muestra error.
                break;
            case 5:
                printf("\n\n///// CARGA DE DATOS FORZADA!! /////\n\n");
            	forzada=1;
            	informes=1;								// La otra bandera que permite mostrar datos en el Menú.
            	flag=1;
                break;
            case 6:
                return 0;								// Salida del programa.
                break;
        }
    }/// FIN WHILE.




	return EXIT_SUCCESS;
}
