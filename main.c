#include <stdio.h>

/*Escreva um programa que leia dois valores X e Y.
A seguir, mostre uma sequ�ncia de 1 at� Y,
passando para a pr�xima linha a cada X n�meros.*/
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
