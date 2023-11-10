#include<stdio.h>
#include<conio.h>

void main (){
	
	float base, altura;
	
	printf("Informe o valor da base e da altura do trinagulo: ");
		scanf("%f %f",&base ,&altura);
	
		float area = (base*altura)/2;
	
	printf("A area do triangulo eh %.2f",area);
	
	getch();

}