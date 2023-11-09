/*Escreva um programa que leia o número inteiro e positivo e calcule o seu dobro, os seu triplo, o seu quadrado,
 o seu cubo e a sua raiz.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main (){
	int num;
	
	printf("Informe um numero:");
		scanf("%d",&num);
		
		int dobro = num*2;
		int triplo = num*3;
		int quadrado = pow(num,2);
		int cubo = pow(num,3);
		int raiz = sqrt(num);
		
	printf("O dobro do numero eh: %d\n",dobro);
	printf("O triplo do numero eh: %d\n",triplo);
	printf("O quadrado do numero eh: %d\n",quadrado);
	printf("O cubo do numero eh: %d\n",cubo);
	printf("A raiz do numero eh: %d",raiz);
	
	getch();
}
