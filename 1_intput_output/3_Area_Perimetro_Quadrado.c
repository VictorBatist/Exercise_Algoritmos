/*Escreva um programa que leia o valor de um lado de um quadrado e calcule a sua área e o seu perimetro*/

#include<stdio.h>
#include<conio.h>

void main (){
	
	int valor_lado;
	
	printf("Informe o valor do lado do quadrado:");
		scanf("%d",&valor_lado);
		
		int area = valor_lado * valor_lado;
		int perimetro = valor_lado*4;
		
	printf("A area desse quadrado eh: %d  \nE o perimetro eh: %d",area,perimetro);
	
	getch();
}