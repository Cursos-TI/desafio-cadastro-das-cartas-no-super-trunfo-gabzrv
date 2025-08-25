#include <stdio.h>
#include <string.h>

int main() {
    
    //Neste código, iremos criar um jogo de super trunfo em c, contendo o estado, o código da carta, nome da cidade, a população, a área (em km²), o pib e o número de ponstos turísticos//

    //Variáveis da carta1
  char Carta1_Estado[50],Carta1_Codigo[10],Carta1_Nome_da_cidade[100];
  int Carta1_Pontos_turisticos;
  float Carta1_Area,Carta1_Pib,Carta1_Densidade_Populacional,Carta1_Pib_per_Capita,Carta1_Super_Poder; 
  long int Carta1_Populacao;
    // Variáveis da Carta 2
  char Carta2_Estado[50], Carta2_Codigo[10], Carta2_Nome_da_cidade[100];
  long int Carta2_Populacao;
  float Carta2_Area, Carta2_Pib, Carta2_Densidade_Populacional,Carta2_Pib_per_Capita,Carta2_Super_Poder; // Em bilhões
  int Carta2_Pontos_turisticos;

    //Carta 1
  strcpy(Carta1_Estado, "Goiás");
  strcpy(Carta1_Nome_da_cidade, "Goiânia");
  strcpy(Carta1_Codigo, "A");
  Carta1_Populacao = 1437366;
  Carta1_Area = 729.296; //Em Km²
  Carta1_Pib = 59.865; //Em bilhões
  Carta1_Pontos_turisticos = 16;
  Carta1_Densidade_Populacional = (float) Carta1_Populacao / Carta1_Area; //Em km²
  Carta1_Pib_per_Capita = (Carta1_Pib * 1000000000.0) / Carta1_Populacao;
  Carta1_Super_Poder = (float)(Carta1_Populacao + Carta1_Area + Carta1_Pib + Carta1_Pontos_turisticos + Carta1_Pib_per_Capita + (1.0 / Carta1_Densidade_Populacional));
  
    // Exibição da Carta 1
  printf("--- Carta 1 ---\n");
  printf("Estado: %s\n", Carta1_Estado);
  printf("Cidade: %s\n", Carta1_Nome_da_cidade);
  printf("Código: %s\n", Carta1_Codigo);
  printf("População: %ld\n", Carta1_Populacao);
  printf("Área: %.2f km²\n", Carta1_Area);
  printf("PIB: %.2f bilhões\n", Carta1_Pib);
  printf("Pontos turísticos: %d\n", Carta1_Pontos_turisticos);
  printf("Densidade Populacional: %.3f hab/km²\n", Carta1_Densidade_Populacional);
  printf("PIB per Capita: R$ %.5f\n", Carta1_Pib_per_Capita);
  printf("Super Poder: %.2f\n", Carta1_Super_Poder);
    
    //Carta 2
  strcpy(Carta2_Estado, "Rio Grande do Sul");
  strcpy(Carta2_Nome_da_cidade, "Porto Alegre");
  strcpy(Carta2_Codigo, "B");
  Carta2_Populacao = 1332845;
  Carta2_Area = 495.977; //Em km²
  Carta2_Pib = 76.074; //Em bilhões
  Carta2_Pontos_turisticos = 18;
  Carta2_Densidade_Populacional = (float) Carta2_Populacao / Carta2_Area; //Em km²
  Carta2_Pib_per_Capita = (Carta2_Pib * 1000000000.0) / Carta2_Populacao;
  Carta2_Super_Poder = (float)(Carta2_Populacao + Carta2_Area + Carta2_Pib + Carta2_Pontos_turisticos + Carta2_Pib_per_Capita + (1.0 / Carta2_Densidade_Populacional));
  
    // Exibe carta 2
  printf("Carta 2:\n");
  printf("Estado: %s\n", Carta2_Estado);
  printf("Cidade: %s\n", Carta2_Nome_da_cidade);
  printf("Código: %s\n", Carta2_Codigo);
  printf("População: %ld milhões\n", Carta2_Populacao);
  printf("Área: %.3f km²\n", Carta2_Area);
  printf("PIB: %.3f bilhões\n", Carta2_Pib);
  printf("Pontos turísticos: %d\n", Carta2_Pontos_turisticos);
  printf("Densidade Populacional: %.3f\n", Carta2_Densidade_Populacional);
  printf("O Pib per Capita é: R$ %.5f\n", Carta2_Pib_per_Capita);
  printf("Super Poder: %.2f\n", Carta2_Super_Poder);
   
    //Comparação 
  printf("\nComparacao de Cartas:\n");    
    // População
  printf("Populacao: Carta %d venceu (%d)\n",
        (Carta1_Populacao > Carta2_Populacao) ? 1 : 2,
        (Carta1_Populacao > Carta2_Populacao) ? 1 : 0);
    // Área
  printf("Area: Carta %d venceu (%d)\n",
        (Carta1_Area > Carta2_Area) ? 1 : 2,
        (Carta1_Area > Carta2_Area) ? 1 : 0);
   // PIB
    printf("PIB: Carta %d venceu (%d)\n",
        (Carta1_Pib > Carta2_Pib) ? 1 : 2,
        (Carta1_Pib > Carta2_Pib) ? 1 : 0);
    // Pontos Turísticos
    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
        (Carta1_Pontos_turisticos > Carta2_Pontos_turisticos) ? 1 : 2,
        (Carta1_Pontos_turisticos > Carta2_Pontos_turisticos) ? 1 : 0);
    // Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        (Carta1_Densidade_Populacional > Carta2_Densidade_Populacional) ? 1 : 2,
        (Carta1_Densidade_Populacional > Carta2_Densidade_Populacional) ? 1 : 0);
    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n",
        (Carta1_Pib_per_Capita > Carta2_Pib_per_Capita) ? 1 : 2,
        (Carta1_Pib_per_Capita > Carta2_Pib_per_Capita) ? 1 : 0);
    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n",
        (Carta1_Super_Poder > Carta2_Super_Poder) ? 1 : 2,
        (Carta1_Super_Poder > Carta2_Super_Poder) ? 1 : 0);

    return 0;
}
