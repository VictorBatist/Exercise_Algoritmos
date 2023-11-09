/*Escreva um program que leia três números e seus respectivos pesos e calcule a sua média ponderada*/

#include<stdio.h>
#include<conio.h>

const float PESO1= 2;
const float PESO2= 4;
const float PESO3= 6;

void main (){
	
	float num1, num2, num3;
	
	printf("Informe as tres notas:");
		scanf("%f %f %f",&num1,&num2,&num3);
	
		float media_ponderada= (num1*PESO1)+(num2*PESO2)+(num3*PESO3)/(PESO1+PESO2+PESO3);
	
	printf("A media ponderada das notas eh: %.2f",media_ponderada);
	
	getch();
} 
