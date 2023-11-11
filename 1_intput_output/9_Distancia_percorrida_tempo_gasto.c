/*Esecreva um programa que leia o valor de uma distancia percorrida em km e o tempo gasto em horas
e calcule a velocidade média em m/s*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main (){
	float km, horas;
	
	printf("Informe a distancia percorrida em Km:");
		scanf("%f",&km);
	printf("Informe o tempo gasto em horas:");
		scanf("%f",&horas);
	
		float velocidade_media = (km/horas)/3.6;
	
	printf("A velocidade media foi de %.2f m/s", velocidade_media);
	
	getch();
	
}