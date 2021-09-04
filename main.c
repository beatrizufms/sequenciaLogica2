#include <stdio.h>

/*caca-palavras emm linguagem c
  autor: Beatriz Lima
  ano: 2021
  disciplína: AlgProg2*/

/*Escreva um programa que leia dois valores X e Y.
A seguir, mostre uma sequência de 1 até Y,
passando para a próxima linha a cada X números.*/
int main(void){
    int n, x1;
    int cont = 1, aux = 1;
    scanf("%i %i", &n, &x1);

    for(int i = 1; i <= x1; i++){
        if(cont < n){
            printf("%i ", aux);
            cont++;
            aux++;
        }else{
            printf("%i\n", aux);
            aux++;
            cont = 1;
        }
    }
    return 0;
}
