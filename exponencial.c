#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

double uniforme(){
    double u = rand() / ((double) RAND_MAX + 1.0);
    u = 1.0 - u;
    return (u);
}

int main(){
    double l;
    printf("Informe o tempo médio (s): ");
    scanf("%lF", &l);
    l = 1.0/l;

    double soma = 0.0;
    double qtd_valores_gerados = 1000000000000000;

    int semente = time(NULL);
    srand(semente);

    int i;
    for(i = 0; i < qtd_valores_gerados; i++){
        double valor = (-1.0/l) * log(uniforme());
        // printf("%lF\n", valor);
        // getchar();
        soma += valor;
    }
    printf("media: %lF\n", (soma/qtd_valores_gerados));

    return 0;
}