#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ENTRIES 100
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
typedef struct {
    char codigoCarta[5];
    char cityName[20];
    int population;
    float areaInKm2;
    float pib;
    int numberOfTouristSpots;
} Registro;  

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    Registro registros[MAX_ENTRIES]; 
    int count = 0;                   
    char letra = 'a';
    int numero = 1;
    char continuar;
    
    // Cadastro das Cartas:
    printf("--------BEM VINDO AO SUPER TRUNFO PAÍSES---------\n");
    printf("Digite abaixo uma letra de A até H para cadastrar uma carta:\n");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra >= 'a' && letra <= 'h') {
        do {
           snprintf(registros[count].codigoCarta, sizeof(registros[count].codigoCarta), "%c%02d", letra, numero);

            printf("Código da carta: %s\n", registros[count].codigoCarta);
            printf("Digite o nome da cidade: \n");
            scanf(" %19[^\n]", registros[count].cityName);
            printf("Digite o número populacional: \n");
            scanf("%d", &registros[count].population);
            printf("Digite a área em km²: ");
            scanf("%f", &registros[count].areaInKm2);
            printf("Digite o PIB: ");
            scanf("%f", &registros[count].pib);
            printf("Digite a quantidade de pontos turísticos: ");
            scanf("%d", &registros[count].numberOfTouristSpots);

            numero++;
            if (numero > 4) {
                numero = 1;
                letra++;
            }


            if (letra > 'h') {
                printf("Limite máximo de códigos (h04) atingido.\n");
                break;
            }

            count++;

            if (count >= MAX_ENTRIES) {
                printf("Limite máximo de registros (%d) atingido.\n", MAX_ENTRIES);
                break;
            }

            printf("Deseja continuar o cadastro? (s/n): ");
            scanf(" %c", &continuar);

        } while (continuar == 's' || continuar == 'S');

        printf("\nCartas cadastradas:\n");
        for (int i = 0; i < count; i++) {
            printf("Código da carta: %s, Cidade: %s, População: %d, Área em km²: %.2f, PIB: %.2f, Pontos turísticos: %d\n",
                registros[i].codigoCarta, registros[i].cityName, registros[i].population, 
                registros[i].areaInKm2, registros[i].pib, registros[i].numberOfTouristSpots);
        }

    }else {
        printf("Digite uma letra entre A e H somente!\n");
    }

    printf("Cadastro encerrado\n");
    return 0;
}
