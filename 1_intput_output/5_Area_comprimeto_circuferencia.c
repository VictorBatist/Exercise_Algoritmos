#include<stdio.h>
#include<conio.h>
#include<math.h>

const float PI = 3.14;

void main (){
	
	float raio;
	
	printf("Informe o valro do raio da circunferencia:");
		scanf("%f",&raio);
	
		float area = PI * pow(raio,2);
		float comprimento = 2*PI*raio;
	
	printf("A area da circunferencia eh %.2f e o comprimento eh %.2f", area,comprimento);
	
	getch();	

}