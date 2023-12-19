#include<stdio.h>
#include<conio.h>
 
 float const VAL_POLEGADA = 2.45;

void main(){
int polegadas;

printf("Informe o numero de polegadas: ");
    scanf("%d",&polegadas);

    float ValCentimetros = polegadas * VAL_POLEGADA;

printf("O valor de %d polegadas em cm eh %2.f",polegadas,ValCentimetros);

getch();
}