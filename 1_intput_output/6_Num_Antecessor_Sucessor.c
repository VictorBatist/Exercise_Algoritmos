/*Escreva um programa que leia um numero inteiro e informe o seu antecessor e o seu sucessor*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num;

    printf("Informe um numero inteiro: ");
        scanf("%d",&num);

        int antecessor = num - 1;
        int sucessor = num + 1;

    printf("\nO antecessor do numero %d eh %d\n", num, antecessor);
    printf("\nO sucessor do numero %d eh %d\n", num, sucessor);

    getch();

}