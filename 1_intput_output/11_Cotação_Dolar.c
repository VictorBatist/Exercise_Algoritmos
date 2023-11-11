/*Escreva um programa que leia um valor em reais, a cotação atual do dólar e calcule o valor informado pelo 
usuário em dólares*/

#include<stdio.h>
#include<conio.h>

void main (){
	
	float real, valor_dolar;
	
	printf("Informe o valor em reais R$ ");
		scanf("%f", &real);
	printf("Informe quanto esta custando o dolar US$ ");
		scanf("%f", &valor_dolar);
		
		float dolar = real/valor_dolar;
		
	printf("Com o dolar valendo R$ %.2f, R$ %.2f reais custa exatamente US$ %.2f dolares", valor_dolar, real,dolar);
	getch();

}