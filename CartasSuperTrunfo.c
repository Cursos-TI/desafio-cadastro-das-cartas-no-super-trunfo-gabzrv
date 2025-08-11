#include <stdio.h>
#include <string.h>

int main() {
    
    //Neste código, iremos criar um jogo de super trunfo em c, contendo o estado, o código da carta, nome da cidade, a população, a área (em km²), o pib e o número de ponstos turísticos//

    //Variáveis
  char Estado[50],Codigo[10],Nome_da_cidade[100];
  int Pontos_turisticos;
  float Area,Pib; 
  long Populacao;

    //Carta 1
  strcpy(Estado, "Goiás");
  strcpy(Nome_da_cidade, "Goiânia");
  strcpy(Codigo, "A");
  Populacao = 1437366;
  Area = 729.296; //Em Km²
  Pib = 59.865; //Em bilhões
  Pontos_turisticos = 16;

    //Exibição carta 1
  printf("Carta 1:\n");
  printf("Estado: %s\n", Estado);
  printf("Cidade: %s\n", Nome_da_cidade);
  printf("Código: %s\n", Codigo);
  printf("População: %ld\n", Populacao);
  printf("Área: %.3f km²\n", Area);
  printf("Pib: %.3f bilhões\n", Pib);
  printf("Pontos turísticos: %d\n", Pontos_turisticos);

    //Carta 2
  strcpy(Estado, "Rio Grande do Sul");
  strcpy(Nome_da_cidade, "Porto Alegre");
  strcpy(Codigo, "B");
  Populacao = 1332845;
  Area = 495.977; //Em km²
  Pib = 76.074; //Em bilhões
  Pontos_turisticos = 18;

    // Exibe carta 2
  printf("Carta 2:\n");
  printf("Estado: %s\n", Estado);
  printf("Cidade: %s\n", Nome_da_cidade);
  printf("Código: %s\n", Codigo);
  printf("População: %ld\n", Populacao);
  printf("Área: %.3f km²\n", Area);
  printf("PIB: %.3f bilhões\n", Pib);
  printf("Pontos turísticos: %d\n", Pontos_turisticos);

return 0;

}    
