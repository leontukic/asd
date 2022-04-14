/*
 * calculos.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Tukic
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

float optionUno();
float optionAerolineas();
float optionLatam();
int optionTres(float km, float aerolineas, float latam, int flag);
int optionCuatro(int flag);
void calculosListos (int flag);
int datosEnteros (int numA, int numB);
float datosFlotantes(int numA, int numB);
float card (float precio, float promedio);
float precioKm (float precio , float km);
void precioDiferencia (float aerolineas, float latam);
void forzado (int cargaForzada);
void precioBtc (float precio);


#endif /* CALCULOS_H_ */
