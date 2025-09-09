#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //Neste código, iremos criar um jogo de super trunfo em c, contendo o estado, o código da carta, nome da cidade, a população, a área (em km²), o pib e o número de ponstos turísticos//

    //Variáveis funcionamento do jogo
  int escolhajogador, escolhaAtributo, escolhaAtributo2, resultado;
  float somaCarta1 = 0, somaCarta2 = 0;

    //Variáveis da carta1
  int Carta1_Pontos_turisticos;
  float Carta1_Area,Carta1_Pib,Carta1_Densidade_Populacional,Carta1_Pib_per_Capita,Carta1_Super_Poder; 
  long int Carta1_Populacao;
    
    // Variáveis da Carta 2
  int Carta2_Pontos_turisticos;
  float Carta2_Area, Carta2_Pib, Carta2_Densidade_Populacional,Carta2_Pib_per_Capita,Carta2_Super_Poder; // Em bilhões
  long int Carta2_Populacao;
    
    // Menu Inicial
  printf("--- Bem-vindo ao jogo Super Trunfo ---\n");
  printf("Escolha uma opção: \n");
  printf("1. Iniciar o jogo!\n");
  printf("2. Regras do jogo!\n");
  printf("3. Sair do jogo!\n");
  scanf("%d", &escolhajogador);

  switch(escolhajogador) {
        case 1:
            printf("\n--- Iniciando o jogo! ---\n");
    //Carta 1
  char Carta1_Estado[] = "Goiás";
  char Carta1_Nome_da_cidade[1000] = "Goiânia";
  char Carta1_Codigo[] = "A";
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
  printf("1. População: %ld\n", Carta1_Populacao);
  printf("2. Área: %.2f km²\n", Carta1_Area);
  printf("3. PIB: %.2f bilhões\n", Carta1_Pib);
  printf("4. Pontos turísticos: %d\n", Carta1_Pontos_turisticos);
  printf("5. Densidade Populacional: %.3f hab/km²\n", Carta1_Densidade_Populacional);
  printf("6. PIB per Capita: R$ %.5f\n", Carta1_Pib_per_Capita);
  printf("7. Super Poder: %.2f\n", Carta1_Super_Poder);
    
    //Carta 2
  char Carta2_Estado[] = "Rio Grande do Sul";
  char Carta2_Nome_da_cidade[1000] = "Porto Alegre";
  char Carta2_Codigo[] = "B";
  Carta2_Populacao = 1332845;
  Carta2_Area = 495.977; //Em km²
  Carta2_Pib = 76.074; //Em bilhões
  Carta2_Pontos_turisticos = 18;
  Carta2_Densidade_Populacional = (float) Carta2_Populacao / Carta2_Area; //Em km²
  Carta2_Pib_per_Capita = (Carta2_Pib * 1000000000.0) / Carta2_Populacao;
  Carta2_Super_Poder = (float)(Carta2_Populacao + Carta2_Area + Carta2_Pib + Carta2_Pontos_turisticos + Carta2_Pib_per_Capita + (1.0 / Carta2_Densidade_Populacional));
  
    // Exibe carta 2
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", Carta2_Estado);
  printf("Cidade: %s\n", Carta2_Nome_da_cidade);
  printf("Código: %s\n", Carta2_Codigo);
  printf("1. População: %ld\n", Carta2_Populacao);
  printf("2. Área: %.3f km²\n", Carta2_Area);
  printf("3. PIB: %.3f bilhões\n", Carta2_Pib);
  printf("4. Pontos turísticos: %d\n", Carta2_Pontos_turisticos);
  printf("5. Densidade Populacional: %.3f\n", Carta2_Densidade_Populacional);
  printf("6. O Pib per Capita é: R$ %.5f\n", Carta2_Pib_per_Capita);
  printf("7. Super Poder: %.2f\n", Carta2_Super_Poder);

    //Comparação 
    printf("\n--- Escolha dos Atributos ---\n");
    printf("Escolha o 1º atributo (1-7)\n");
    scanf("%d", &escolhaAtributo);

switch(escolhaAtributo){
    // População
    case 1:
    printf("\n--- Comparação por População ---\n");
    printf("A População da Carta 1 (%s): %ld\n", Carta1_Nome_da_cidade, Carta1_Populacao);
    printf("A População da Carta 2 (%s): %ld\n", Carta2_Nome_da_cidade, Carta2_Populacao);
    somaCarta1 += Carta1_Populacao;
    somaCarta2 += Carta2_Populacao;
    break;

    // Área
    case 2:
    printf("\n--- Comparação por Área ---\n");
    printf("A Área da Carta 1 (%s): %.3f km²\n", Carta1_Nome_da_cidade, Carta1_Area);
    printf("A Área da Carta 2 (%s): %.3f km²\n", Carta2_Nome_da_cidade, Carta2_Area);
    somaCarta1 += Carta1_Area;
    somaCarta2 += Carta2_Area;
    break;

    // PIB
    case 3:
    printf("\n--- Comparação por Pib ---\n");
    printf("O Pib da Carta 1 (%s): %.3f bilhões\n", Carta1_Nome_da_cidade, Carta1_Pib);
    printf("O Pib da Carta 2 (%s): %.3f bilhões\n", Carta2_Nome_da_cidade, Carta2_Pib);
    somaCarta1 += Carta1_Pib;
    somaCarta2 += Carta2_Pib;
    break;

    // Pontos Turísticos
    case 4:
    printf("\n--- Comparação por Pontos Túristicos ---\n");
    printf("Os Pontos Túristicos da Carta 1 (%s): %d\n", Carta1_Nome_da_cidade, Carta1_Pontos_turisticos);
    printf("Os Pontos Túristicos da Carta 2 (%s): %d\n", Carta2_Nome_da_cidade, Carta2_Pontos_turisticos);
    somaCarta1 += Carta1_Pontos_turisticos;
    somaCarta2 += Carta2_Pontos_turisticos;
    break;

    // Densidade Populacional
    case 5:
    printf("\n--- Comparação da Densidade Populacional ---\n");
    printf("A Densidade Populacional da Carta 1 (%s): %.3f\n", Carta1_Nome_da_cidade, Carta1_Densidade_Populacional);
    printf("A Densidade Populacional da Carta 2 (%s): %.3f\n", Carta2_Nome_da_cidade, Carta2_Densidade_Populacional);
    somaCarta1 += Carta1_Densidade_Populacional;
    somaCarta2 += Carta2_Densidade_Populacional;
    break;
    
    // PIB per Capita
    case 6:
    printf("\n--- Comparação por Pib per Capita ---\n");
    printf("O Pib per Capita da Carta 1 (%s): %.5f\n", Carta1_Nome_da_cidade, Carta1_Pib_per_Capita);
    printf("O Pib per Capita da Carta 2 (%s): %.5f\n", Carta2_Nome_da_cidade, Carta2_Pib_per_Capita);
    somaCarta1 += Carta1_Pib_per_Capita;
    somaCarta2 += Carta2_Pib_per_Capita;
    break;
    
    // Super Poder
    case 7:
    printf("\n ---Comparação por Super Poder ---\n");
    printf("O Super poder da Carta 1 (%s): %.2f\n", Carta1_Nome_da_cidade, Carta1_Super_Poder);
    printf("O Super Poder da Carta 2 (%s): %.2f\n", Carta2_Nome_da_cidade, Carta2_Super_Poder);
    somaCarta1 += Carta1_Super_Poder;
    somaCarta2 += Carta2_Super_Poder;
    break;
  default:
    printf("Opção Inválida!\n");
  break;
  } 
  
do {
printf("\n--- Escolha dos Atributos ---\n");
printf("Escolha o 2º atributo (1-7)\n");
scanf("%d", &escolhaAtributo2);
   if(escolhaAtributo2 == escolhaAtributo){
        printf("Você já escolheu esse atributo! Escolha outro.\n");
    } 
  }while(escolhaAtributo2 == escolhaAtributo);

  switch(escolhaAtributo2){
    // População
    case 1:
    printf("\n--- Comparação por População ---\n");
    printf("A População da Carta 1 (%s): %ld\n", Carta1_Nome_da_cidade, Carta1_Populacao);
    printf("A População da Carta 2 (%s): %ld\n", Carta2_Nome_da_cidade, Carta2_Populacao);
    somaCarta1 += Carta1_Populacao;
    somaCarta2 += Carta2_Populacao;
    break;

    // Área
    case 2:
    printf("\n--- Comparação por Área ---\n");
    printf("A Área da Carta 1 (%s): %.3f km²\n", Carta1_Nome_da_cidade, Carta1_Area);
    printf("A Área da Carta 2 (%s): %.3f km²\n", Carta2_Nome_da_cidade, Carta2_Area);
    somaCarta1 += Carta1_Area;
    somaCarta2 += Carta2_Area;
    break;

    // PIB
    case 3:
    printf("\n--- Comparação por Pib ---\n");
    printf("O Pib da Carta 1 (%s): %.3f bilhões\n", Carta1_Nome_da_cidade, Carta1_Pib);
    printf("O Pib da Carta 2 (%s): %.3f bilhões\n", Carta2_Nome_da_cidade, Carta2_Pib);
    somaCarta1 += Carta1_Pib;
    somaCarta2 += Carta2_Pib;
    break;

    // Pontos Turísticos
    case 4:
    printf("\n--- Comparação por Pontos Túristicos ---\n");
    printf("Os Pontos Túristicos da Carta 1 (%s): %d\n", Carta1_Nome_da_cidade, Carta1_Pontos_turisticos);
    printf("Os Pontos Túristicos da Carta 2 (%s): %d\n", Carta2_Nome_da_cidade, Carta2_Pontos_turisticos);
    somaCarta1 += Carta1_Pontos_turisticos;
    somaCarta2 += Carta2_Pontos_turisticos;
    break;

    // Densidade Populacional
    case 5:
    printf("\n--- Comparação da Densidade Populacional ---\n");
    printf("A Densidade Populacional da Carta 1 (%s): %.3f\n", Carta1_Nome_da_cidade, Carta1_Densidade_Populacional);
    printf("A Densidade Populacional da Carta 2 (%s): %.3f\n", Carta2_Nome_da_cidade, Carta2_Densidade_Populacional);
    somaCarta1 += Carta1_Densidade_Populacional;
    somaCarta2 += Carta2_Densidade_Populacional;
    break;
    
    // PIB per Capita
    case 6:
    printf("\n--- Comparação por Pib per Capita ---\n");
    printf("O Pib per Capita da Carta 1 (%s): %.5f\n", Carta1_Nome_da_cidade, Carta1_Pib_per_Capita);
    printf("O Pib per Capita da Carta 2 (%s): %.5f\n", Carta2_Nome_da_cidade, Carta2_Pib_per_Capita);
    somaCarta1 += Carta1_Pib_per_Capita;
    somaCarta2 += Carta2_Pib_per_Capita;
    break;
    
    // Super Poder
    case 7:
    printf("\n ---Comparação por Super Poder ---\n");
    printf("O Super poder da Carta 1 (%s): %.2f\n", Carta1_Nome_da_cidade, Carta1_Super_Poder);
    printf("O Super Poder da Carta 2 (%s): %.2f\n", Carta2_Nome_da_cidade, Carta2_Super_Poder);
    somaCarta1 += Carta1_Super_Poder;
    somaCarta2 += Carta2_Super_Poder;
    break;
  default:
    printf("Opção Inválida!\n");
  break;
  }
  // Resultado final
printf("\nSoma dos atributos da Carta 1 (%s): %.2f\n", Carta1_Nome_da_cidade, somaCarta1);
printf("Soma dos atributos da Carta 2 (%s): %.2f\n", Carta2_Nome_da_cidade, somaCarta2);

resultado = (somaCarta1 > somaCarta2) ? 1 :
            (somaCarta1 < somaCarta2) ? 2 : 0;

if(resultado == 1){
    printf("\nA Carta 1 venceu!\n");
} else if(resultado == 2){
    printf("\nA Carta 2 venceu!\n");
} else {
    printf("\nO jogo empatou!\n");
}
break;
    case 2:
    printf("\n--- Regras do Jogo ---\n");
    printf("Cada carta representa uma cidade.\n");
    printf("Os atributos da sua escolha (Pib, Pontos Turisticos, Área, etc..) serão comparados.\n");
    printf("Quem tiver o maior atributo vence!, com excessão da densidade populacional, onde o menor vence!\n");
  break;
    case 3:
    printf("Sair do jogo...\n");
    break;
      default:
      printf("Opção inválida!\n");
  }  
  
  
  return 0;
}
