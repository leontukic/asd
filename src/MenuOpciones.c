/*
 * MenuOpciones.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Tukic
 */

#include <stdio.h>
#include <stdlib.h>
#include "MenuOpciones.h"
#include "calculos.h"

void inform (float km, float aerolineas, float latam, int flag, int informes, int forzada)
{
     float aerolineasDebitoCard;
     float aerolineasCreditoCard;
     float latamDebitoCard;
     float latamCreditoCard;
     float precioAerolineas;
     float precioLatam;

        if (flag == 1)
        {
           aerolineasDebitoCard = card (aerolineas, -0.1);
           aerolineasCreditoCard = card (aerolineas, 0.25);
           latamDebitoCard = card (latam, -0.1);
           latamCreditoCard = card (latam, 0.25);
           precioAerolineas = precioKm (aerolineas, km);
           precioLatam = precioKm (latam, km);
      }

       if (informes == 1)
       {
           printf ("\n    Aerolineas   \n\n");
           printf ("\n   Precio con Tarjeta de DEBITO: \t  %.2f ", aerolineasDebitoCard);
           printf ("\n   Precio con Tarjeta de CREDITO: \t  %.2f ", aerolineasCreditoCard);
           printf ("\n   Precio pagando con  BITCOIN : \t ");precioBtc (aerolineas);
           printf ("\n   Precio UNITARIO: \t  %.2f ", precioAerolineas);
           printf("\n");
           printf("\n");
           printf("\n");
           printf ("\n      Latam      \n\n");
           printf ("\n   Precio con Tarjeta de DEBITO: \t  %.2f ", latamDebitoCard);
           printf ("\n   Precio con Tarjeta de CREDITO: \t  %.2f ", latamCreditoCard);
           printf ("\n   Precio pagando con  BITCOIN : \t ");precioBtc (latam);
           printf ("\n   Precio UNITARIO: \t  %.2f ", precioLatam);
           printf("\n");
           printf("\n");
           printf("\n");
           printf ("\n   La diferencia de precio es: \t   "); precioDiferencia(aerolineas, latam);

 }

}
void menu (float km, float aerolineas, float latam, int flag, int informes, int forzada)
{
        if (forzada == 1)
        {
            km = 7090;
            aerolineas = 1335000.66;
            latam  = 1350000.76;
            flag = 1;
             }
      if (km == 0)
      {
    	  printf (" \n  1- Ingresar KM:  \t ");
      }
      else
      {
    	  printf ("\n  Kilometros ingresados: \t %.2f  kms", km); forzado (forzada);
      }
      printf("\n");
      printf("\n");
      if (aerolineas == 0)
      {
    	  printf (" \n  1- Ingresar datos Aerolineas:  \t ");
      }
      else
      {
    	  printf ("\n  Aerolineas \t %.2f  ", aerolineas); forzado (forzada);
      }
      printf("\n");
      printf("\n");
      if (latam == 0)
      {
    	  printf (" \n  2- Ingresar datos Latam:  \t ");
      }
      else
      {
    	  printf ("\n  Latam \t %.2f  ", latam); forzado (forzada);
      }
      printf("\n");
      printf("\n");
      printf ("\n  3-  CALCULAR COSTOS:  ");
      printf("\n║ - - - \ta) Tarjeta de débito (descuento 10 )\t\t\t\t\t");calculosListos(flag);
      printf("\n║ - - - \tb) Tarjeta de crédito (interés 25)\t\t\t\t\t");calculosListos(flag);
      printf("\n║ - - - \tc) Bitcoin (1BTC -> 4,796,793.92 Pesos Argentinos (09/04/22)\t\t");calculosListos(flag);
      printf("\n║ - - - \td) Mostrar precio por km (precio unitario)\t\t\t\t");calculosListos(flag);
      printf("\n║ - - - \te) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\t\t");calculosListos(flag);
      printf("\n║");
      printf("\n╠════>>> 4. Informar Resultados:");
      printf("\n║");

      inform(km,aerolineas,latam,flag,informes,forzada);
      printf("\n║");
      printf("\n╠════>>> 5. Carga forzada de datos");
      printf("\n║");
      printf("\n╚════>>> 6. Salir\n\n");

}
