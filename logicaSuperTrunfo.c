#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

     // variaveis da carta 1
    char Estado1 = "A";
    char Codigodacarta1[4] = "A01";
    char Nomedacidade1[10] = "Sãopaulo";
    int Populacao1 = 12325000;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int Numeropt1 = 50;
    float Densidade1 = Populacao1 / Area1;
    float PIBcapta1 = (float)PIB1 / Populacao1;

    // variaveis da carta 2
    char Estado2 = "B";
    char Codigodacarta2[4] = "B02";
    char Nomedacidade2[20] = "RiodeJaneiro";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int Numeropt2 = 30;
    float Densidade2 = Populacao2 / Area2;
    float PIBcapta2 = (float)PIB2 / Populacao2;
   
    printf("Estado :%s \n", Estado1);
    printf("Código da carta : %s\n", Codigodacarta1);
    printf("Nome da Cidade : %s\n", Nomedacidade1);
    printf("População : %d\n", População1);
    printf("Área : %f \n", Area1);
    printf("PIB : %f\n", PIB1);
    printf("Número de Pontos turísticos : %d\n", Numeropt2);
    printf("Densidade Populacional: %2.f hab/km²\n",Densidade1);
    printf("PIB per capta: %2.f reais\n",PIBcapta1);

    printf("Estado :%s \n", Estado2);
    printf("Código da carta : %s\n", Codigodacarta2);
    printf("Nome da Cidade : %s\n", Nomedacidade2);
    printf("População : %d\n", População2);
    printf("Área : %f \n", Area2);
    printf("PIB : %f\n", PIB2);
    printf("Número de Pontos turísticos : %d\n", Numeropt2);
    printf("Densidade Populacional: %2.f hab/km²\n",Densidade2);
    printf("PIB per capta: %2.f reais\n",PIBcapta2);

    printf("comparação das cartas:População\n);
    if(populacao1>populacao2){
        printf("Carta A venceu!\n");}
        else{
            printf("Carta B venceu!\n")};

    printf("comparação das cartas:PIB\n");
    if(PIB1>PIB2){
        printf("Carta A venceu!\n");}
    else{
        printf("Carta B venceu!\n")};
    return 0;
}
