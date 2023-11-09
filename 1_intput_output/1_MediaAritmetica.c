/*Escreva um program que leia três numeros interios e calcule a sua média aritmetica*/

#include<stdio.h>
#include<conio.h>

void main (){
	
	float num1, num2, num3;
	
	printf("Informe as tres medias do Aluno:");
		scanf("%f %f %f",&num1,&num2,&num3);
	
		float media= (num1+num2+num3)/3;
	
	printf("A media do aluno eh: %.1f ", media);
	
	getch();
	
}