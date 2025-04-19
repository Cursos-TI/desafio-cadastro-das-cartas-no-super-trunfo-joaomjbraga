#include <stdio.h>

typedef struct {
    char codigo[4]; // Ex: A01 + '\0'
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("=== Cadastro da carta %d ===\n", i + 1);
        
        printf("Código (Ex: A01): ");
        scanf("%s", cartas[i].codigo);
        
        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        
        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);
        
        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);
        
        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        printf("\n");
    }

    printf("=== Cartas cadastradas ===\n");
    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: R$ %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("\n");
    }

    return 0;
}
