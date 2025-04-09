#include<stdio.h>

     //Desafio Super Trunfo;
     // 1- Cadastro de cartas com suas respectivas informações;
     // 2- Leitura das informações;
     // 3- Saída das informações;

    typedef struct{
        char estado[50], cidade[50], codigo[50];
        float populacao, area, pib;
        int pontos_turisticos;
    } Carta;
     
    void exibirCarta(Carta carta){
      printf("Codigo: %s\n", carta.codigo);
      printf("Estado: %s\n", carta.estado);
      printf("Cidade: %s\n", carta.cidade);
      printf("População: %.3f milhões\n", carta.populacao);
      printf("Área: %.2f km²\n", carta.area);
      printf("PIB: %.2F bilhões\n", carta.pib);
      printf("Pontos Turísticos: %d\n\n", carta.pontos_turisticos);
    }
     
    int main(){

        //Cadastro da carta 1
        Carta carta1 = {
            .estado = "Bahia",
            .cidade = "Salvador",
            .codigo = "A01",
            .populacao = 2.418, //Em milhões
            .area = 693.442, //Em Km²
            .pib = 62.954, //Em bilhões
            .pontos_turisticos = 15
        };
        
        //Cadastro da carta 2
        Carta carta2 = {
            .estado = "Ceara",
            .cidade = "Fortaleza",
            .codigo = "B02",
            .populacao = 2.574, //Em milhões
            .area = 312.353, //Em Km²
            .pib = 73.0, //Em bolhões
            .pontos_turisticos = 25
        };

        //Exibir as cartas
        printf("Carta1:\n");
        exibirCarta(carta1);

        printf("Carta 2: \n");
        exibirCarta(carta2);

        return 0;
    }
    