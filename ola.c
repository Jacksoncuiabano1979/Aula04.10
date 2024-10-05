#include <stdio.h>
#include <stdlib.h>

void main() {
    int x=0; //criando uma varável inteira
    printf ( "Valor de x: %d\n",x);// O (/n serve para pular uma linha)
    x++; //incrementando x em 1 unidade
    printf ("Valor de x: %d\n",x);
    float y = 13.345678; //criando uma variável real
    printf ("Valor de y %f\n", y);
    // Imprimindo o valor de y com apenas 2 casas
    printf ("Valor de y %.2f\n", y);
    //1 Caractere deve estar emtre apóstrofo
    char sexo = 'M';// Variável que aceita 1 caractere
    printf("Sexo: %c\n", sexo);
    //Criando uma varável String(Texto)
    char nome[30] = "João";
    printf ("Nome: %s\n", nome);
    //Imprime a primeira letrad o nome
    printf ("Primeira letra: %c\n" , nome [0]);
    printf("Olá mundo!");

    

}