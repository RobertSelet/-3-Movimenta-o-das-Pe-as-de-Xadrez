#include<stdio.h>
#include<stdlib.h>

// Aula 1 (Aprendendo o basico.)
//
// int idade; (para numero inteiros)
// float altura; (para números com virgulas)
// char opcao; (usado para nomes) 
 
 
 // Aula 2 (Entrada e saída de dados)
 // 
 // %d: Imprime um inteiro no formato decimal.
 //%i: Equivalente a %d.
 // %f: Imprime um número de ponto flutuante no formato padrão.
 // %e: Imprime um número de ponto flutuante na notação científica.
 // %c: Imprime um único caractere.
 // %s: Imprime uma cadeia (string) de caracteres.



  // O que vou usar no Desafio!!!!

  //system("clear");
  
  //printf("--------------------------------------\n");

int main(){


char estado1[15], estado2[15];
char codigo1[15], codigo2[15];
char cidade1[15], cidade2[15];
int popu1, popu2;
float area1, area2;
float pib1, pib2;
int pontostu1, pontostu2;
float pibcapita1, pibcapita2;
float densidade1, densidade2;

float superpoder1, superpoder2;

float inversodensidade1, inversodensidade2;

printf("[Carta 1] Digite o ESTADO da Carta:\n\n");
scanf("%s", &estado1);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n\n", estado1);
printf("--------------------------------------\n\n");


printf("[Carta 1] Digite o Codigo da Carta:\n\n");
scanf("%s", &codigo1);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n", estado1);
printf("• Código: %s.\n\n", codigo1);
printf("--------------------------------------\n\n");


printf("[Carta 1] Digite a Cidade da Carta (Apenas uma Palavra):\n\n");
scanf("%s", cidade1);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n", estado1);
printf("• Código: %s.\n", codigo1);
printf("• Cidade: %s.\n\n", cidade1);
printf("--------------------------------------\n\n");


printf("[Carta 1] Digite Número Populacional da Carta:\n\n");
scanf("%d", &popu1);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n", estado1);
printf("• Código: %s.\n", codigo1);
printf("• Cidade: %s.\n", cidade1);
printf("• População: %d.\n\n", popu1);
printf("--------------------------------------\n\n");


printf("[Carta 1] Digite a Área da Carta (Digite somente o Número):\n\n");
scanf("%f", &area1);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n", estado1);
printf("• Código: %s.\n", codigo1);
printf("• Cidade: %s.\n", cidade1);
printf("• População: %d.\n", popu1);
printf("• Área: %.2f KM².\n\n", area1);
printf("--------------------------------------\n\n");


printf("[Carta 1] Digite o PIB da Carta (Digite somente o Número):\n\n");
scanf("%f", &pib1);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n", estado1);
printf("• Código: %s.\n", codigo1);
printf("• Cidade: %s.\n", cidade1);
printf("• População: %d.\n", popu1);
printf("• Área: %.2f KM².\n", area1);
printf("• PIB: %.2f Reais.\n\n", pib1);
printf("--------------------------------------\n\n");


printf("[Carta 1] Digite a Quantidade de Pontos Turísticos da Carta:\n\n");
scanf("%d", &pontostu1);
system("clear");

//---- Atualização ---- ////

densidade1 = (float) popu1 / area1;
pibcapita1 = (float) pib1 / popu1;

//---- Atualização 2 ---- ////

inversodensidade1 = (float) area1 / popu1;

superpoder1 = popu1 
+ area1
+ pib1 
+ pibcapita1 
+ densidade1 
+ inversodensidade1
+ pontostu1;

//---- Atualização ---- ////

printf("--------------------------------------\n\n");
printf("[Carta 1] Informações:\n\n");
printf("• Estado: %s.\n", estado1);
printf("• Código: %s.\n", codigo1);
printf("• Cidade: %s.\n", cidade1);
printf("• População: %d.\n", popu1);
printf("• Área: %.2f KM².\n", area1);
printf("• PIB: %.2f Reais.\n", pib1);
printf("• Pontos Turísticos: %d.\n", pontostu1);
printf("• Densidade populacional: %.2f.\n", densidade1);
printf("• PIB por capita: %.2f.\n\n", pibcapita1);
printf("• Super Poder: >>>>> %.2f <<<<<\n\n", superpoder1);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite o ESTADO da Carta:\n\n");
scanf("%s", &estado2);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 2] Informações:\n\n");
printf("• Estado: %s.\n\n", estado2);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite o Codigo da Carta:\n\n");
scanf("%s", &codigo2);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 2] Informações:\n\n");
printf("• Estado: %s.\n", estado2);
printf("• Código: %s.\n\n", codigo2);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite a Cidade da Carta (Apenas uma Palavra):\n\n");
scanf("%s", cidade2);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 2] Informações:\n\n");
printf("• Estado: %s.\n", estado2);
printf("• Código: %s.\n", codigo2);
printf("• Cidade: %s.\n\n", cidade2);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite Número Populacional da Carta:\n\n");
scanf("%d", &popu2);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 2] Informações:\n\n");
printf("• Estado: %s.\n", estado2);
printf("• Código: %s.\n", codigo2);
printf("• Cidade: %s.\n", cidade2);
printf("• População: %d.\n\n", popu2);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite a Área da Carta (Digite somente o Número):\n\n");
scanf("%f", &area2);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 2] Informações:\n\n");
printf("• Estado: %s.\n", estado2);
printf("• Código: %s.\n", codigo2);
printf("• Cidade: %s.\n", cidade2);
printf("• População: %d.\n", popu2);
printf("• Área: %.2f KM².\n\n", area2);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite o PIB da Carta (Digite somente o Número):\n\n");
scanf("%f", &pib2);
system("clear");


printf("--------------------------------------\n\n");
printf("[Carta 2] Informações:\n\n");
printf("• Estado: %s.\n", estado2);
printf("• Código: %s.\n", codigo2);
printf("• Cidade: %s.\n", cidade2);
printf("• População: %d.\n", popu2);
printf("• Área: %.2f KM².\n", area2);
printf("• PIB: %.2f Reais.\n\n", pib2);
printf("--------------------------------------\n\n");


printf("[Carta 2] Digite a Quantidade de Pontos Turísticos da Carta:\n\n");
scanf("%d", &pontostu2);
system("clear");

//---- Atualização ---- ////

densidade2 = (float) popu2 / area2;
pibcapita2 = (float) pib2 / popu2;

//---- Atualização 2 ---- ////

inversodensidade2 = (float) area2 / popu2;

superpoder2 = popu2 
+ area2
+ pib2 
+ pibcapita2 
+ densidade2 
+ inversodensidade2
+ pontostu2;

// Total de tudo

printf("--------------------------------------\n\n");
    printf("[Carta 1] Informações:\n\n");
    printf("• Estado: %s\n", estado1);
    printf("• Código: %s\n", codigo1);
    printf("• Cidade: %s\n", cidade1);
    printf("• População: %d\n", popu1);
    printf("• Área: %.2f KM²\n", area1);
    printf("• PIB: %.2f Reais\n", pib1);
    printf("• Pontos Turísticos: %d\n", pontostu1);
    printf("• Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("• PIB per capita: %.2f Reais\n", pibcapita1);
    printf("• Super Poder: >>>>> %.2f <<<<<\n\n", superpoder1);

    printf("--------------------------------------\n\n");
    printf("[Carta 2] Informações:\n\n");
    printf("• Estado: %s\n", estado2);
    printf("• Código: %s\n", codigo2);
    printf("• Cidade: %s\n", cidade2);
    printf("• População: %d\n", popu2);
    printf("• Área: %.2f KM²\n", area2);
    printf("• PIB: %.2f Reais\n", pib2);
    printf("• Pontos Turísticos: %d\n", pontostu2);
    printf("• Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("• PIB per capita: %.2f Reais\n", pibcapita2);
    printf("• Super Poder: >>>>> %.2f <<<<<\n\n", superpoder2);
    printf("--------------------------------------\n\n");
// ---- Comparação ---- //
printf(" >>> [Batalha de Cartas] <<<\n\n");

    if (popu1 > popu2) {
    printf("• População: Carta 1 Venceu\n");
    } else {
    printf("• População: Carta 2 Venceu\n");
    }
    
    if (area1 > area2) {
    printf("• Área: Carta 1 Venceu\n");
    } else {
    printf("• Área: Carta 2 Venceu\n");
    }
    
    if (pib1 > pib2) {
    printf("• PIB: Carta 1 Venceu\n");
    } else {
    printf("• PIB: Carta 2 Venceu\n");
    }
    
    if (pontostu1 > pontostu2) {
    printf("• Pontos Turísticos: Carta 1 Venceu\n");
    } else {
    printf("• Pontos Turísticos: Carta 2 Venceu\n");
    }
    
   if (densidade1 > densidade2) {
    printf("• Densidade Populacional: Carta 1 Venceu\n");
    } else {
    printf("• Densidade Populacional: Carta 2 Venceu\n");
    }
    
    if (pibcapita1 > pibcapita2) {
    printf("• PIB por Capita: Carta 1 Venceu\n");
    } else {
    printf("• PIB por Capita: Carta 2 Venceu\n");
    }
    
    if (superpoder1 > superpoder2) {
    printf("• Super Poder: Carta 1 Venceu\n\n");
    } else {
    printf("• Super Poder: Carta 2 Venceu\n\n");
    }
    /*printf("• População: (%s)\n", (popu1 > popu2) ? "Vencedor Carta 1" : "Vencedor Carta 2");
    printf("• Área: (%s)\n", (area1 > area2) ? "Vencedor Carta 1" : "Vencedor Carta 2");
    printf("• PIB: (%s)\n", (pib1 > pib2) ? "Vencedor Carta 1" : "Vencedor Carta 2");
    printf("• Pontos Turísticos: (%s)\n", (pontostu1 > pontostu2) ? "Vencedor Carta 1" : "Vencedor Carta 2");
    printf("• Densidade populacional: (%s)\n", (densidade1 > densidade2) ? "Vencedor Carta 1" : "Vencedor Carta 2");
    printf("• PIB per capita: (%s)\n", (pibcapita1 > pibcapita2) ? "Vencedor Carta 1" : "Vencedor Carta 2");
    printf("• Super Poder: (%s)\n\n", (superpoder1 > superpoder2) ? "Vencedor Carta 1" : "Vencedor Carta 2"
    */
    
    printf("--------------------------------------\n\n");
return 0;
}