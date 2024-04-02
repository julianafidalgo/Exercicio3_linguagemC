#include <stdio.h>
#include <stdlib.h>

#define exercicio3

#ifdef exercicio3
/* 3. Escrever um algoritmo que leia três números quaisquer e informe qual é o maior
e se eles forem todos igual informe ao usuário e solicite novos dados. */

main()
{
    float NUM1, NUM2, NUM3;

   do {

    printf("Digite um numero qualquer: ");
    scanf("%f", &NUM1);
    printf("Digite mais um numero qualquer: ");
    scanf("%f", &NUM2);
    printf("Digite o ultimo numero qualquer: ");
    scanf("%f", &NUM3);

    if (NUM1 == NUM2 && NUM1 == NUM3 && NUM2 == NUM3) {
        printf("Os numeros sao iguais, digite novamente. \n ");
    }
   }
    while(NUM1 == NUM2 && NUM1 == NUM3 && NUM2 == NUM3);

    if (NUM1 > NUM2 && NUM1 > NUM3) {
        printf("O maior numero é: %0.1f ", NUM1);

    } else {

    if (NUM2> NUM1 && NUM2 > NUM3) {
        printf("O maior numero e': %0.1f ", NUM2);

    } else {
        printf("O maior numero e':  %0.1f", NUM3);

    }

    }
}
#endif // exercicio3
