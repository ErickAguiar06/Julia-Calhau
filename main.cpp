#include <stdio.h>
int main()
{
    char nome_time[50];
    int numero_vitorias, numero_empates, total_pontos;
    printf("Digite o nome do time de futebol: ");
    scanf("%49s", nome_time);
    
    printf("Digite o número de vitórias:");
    scanf("%d", &numero_vitorias);
    
    printf("Digite o número de empates:");
    scanf("%d", &numero_empates);
    
    total_pontos = (numero_vitorias * 3) + numero_empates;
    
    printf("O time %s tem um total de %d pontos.\n", nome_time,total_pontos);
    
    return 0;
}