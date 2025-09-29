#include<stdio.h>
#include<stdlib.h>

int main() {

//Declarar Peças
int bispo = 1, rainha = 1, torre = 1;
//Declarwr Menu
int opcao, menu;

//Menu Do Xadrez
printf("1. [Torre] (Cinco Casas para Direita\n");
printf("2. [Bispo] (Duas Direções a Cada casa)\n");
printf("3. [Rainha] (Oito Casa para Esquerda)\n\n");
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

case 3:
for (rainha = 1; rainha <= 8; rainha++){
printf("[Rainha] Moveu Para <<Esquerda>>\n");
}
break;


}







}