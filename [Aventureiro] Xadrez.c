#include<stdio.h>
#include<stdlib.h>

int main() {

//Declarar Peças
int bispo = 1, rainha = 1, torre = 1, cavalo;
//Declarwr Menu
int opcao, menu;

//Menu Do Xadrez
printf("1. [Torre] (Cinco Casas para Direita\n");
printf("2. [Bispo] (Duas Direções a Cada casa)\n");
printf("3. [Rainha] (Oito Casa para Esquerda)\n");
printf("4. [Cavalo] (Uma Direção)\n\n");
printf("Selecione qual peça você quer que ande:\n");
scanf("%d", &menu);
system("clear");


//Função de Cada Peças
switch (menu) {


// Programa da Torre
case 1:
while (torre <= 5){
printf("[Torre] Moveu Para <<Direita>>\n");
torre++;}
break;


//Programa do Bispo
case 2:
do{
printf("[Bispo] Moveu Para <<Cima>>\n");
printf("[Bispo] Moveu Para <<Direita>>\n");
bispo++;
} while (bispo <= 5);
break;


//Programa Rainha
case 3:
for (rainha = 1; rainha <= 8; rainha++){
printf("[Rainha] Moveu Para <<Esquerda>>\n");
}
break;


//Programa Cavalo
case 4:
for(int i = 1; i <= 2; i++){
for(int j = 1; j <= 2; j++){
printf("[Cavalo] Moveu Para <<Baixo>>\n");}
printf("[Cavalo] Moveu Para <<Esquerda>>\n");}
break;}







}