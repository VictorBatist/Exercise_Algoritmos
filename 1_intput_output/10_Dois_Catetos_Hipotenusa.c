/*Escerva um programa que leia o valor dos dois catetos de um triângulo retangulo e calcule o valor da hipotenusa*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main (){
	
	float cateto1, cateto2;
	
	printf("Informe o valor dos dois cateto:");
		scanf("%f%f",&cateto1,&cateto2);
		
		float soma = pow(cateto1,2) + pow(cateto2,2);
		float hipotenusa = sqrt(soma);
	
	printf("O valor da hipotenusa eh de %.2f",hipotenusa);
	
	getch();
	
}