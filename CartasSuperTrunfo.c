#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char state[100];
    int letterCode[100];
    char cityName[20];
    int population;
    float areaInKm2;
    float pib;
    int numberOfTouristSpots;
    char acept;
    int count = 0;
    int number = 1;  
    
    // Cadastro das Cartas:
    printf("--------BEM VINDO AO SUPER TRUNFO PAÍSES---------\n");
    printf("Digite abaixo uma letra de A até H para cadastrar uma carta:\n");
    scanf(" %c", &state);

    if ((state >= 'a' && state <= 'h') || (state >= 'A' && state <= 'H')) {
        do {
            
        } while (acept == 's' || acept == 'S');
        
    }else {
        printf("Digite uma letra entre A e H somente!\n");
    }

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
