/*Escreva um programa que leia o valor de uma temperatra em Celsius e calcule o seu valor correspondente em Fahrenhneit
e em kelvin*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main (){
	
	float celsius;
	
	printf("Informe a temperatua em graus Celsius: ");
		scanf("%f",&celsius);
	
		float fahrenheit = (celsius*1.8)+32;
		float kelvin = celsius + 273.15;
	
	printf("Em Fahrenheit eh %.2f e em Kelvin eh %.2f",fahrenheit,kelvin);
	
	getch();
	
}