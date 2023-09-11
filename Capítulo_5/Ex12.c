/* 12-Escreva um programa que leia um número inteiro e calcule a soma de todos os 
divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores 
do número 66 é 1+2+3+6+11+22+33 = 78. */

#include <stdio.h>


int main(){

    int num, soma = 0;

    do{
        printf("Digite um valor positivo: ");
        scanf("%d", &num);
    }while(num < 0);

    for(int i = 1; i < num; i++){
        if(num%i == 0){
            soma = soma + i;
        }
    }
    printf("A soma dos divisores de %d é %d.\n", num, soma);

    return 0;
}