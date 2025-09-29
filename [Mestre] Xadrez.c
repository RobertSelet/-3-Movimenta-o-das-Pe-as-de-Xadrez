#include<stdio.h>
#include<stdlib.h>

// Void Torre
void torre(int casas) {
if (casas > 0) {
printf("[Torre] Moveu Para <<Direita>>\n");
torre(casas - 1);}
}


// Void Bispo
void bispo(int casa) {
if (casa > 0) {
printf("[Bispo] Moveu Para <<Cima>>\n");
printf("[Bispo] Moveu Para <<Direita>>\n");
bispo(casa - 1);}
}



// Void Rainha
void rainha(int casas) {
if (casas > 0) {
printf("[Rainha] Moveu Para <<Esquerda>>\n");
rainha(casas - 1);}
}



int main() {

//Declarar Peças
int cavalo;
//Declarwr Menu
int opcao, menu;


//Menu Do Xadrez
printf("1. [Torre] (Cinco Casas para Direita\n");
printf("2. [Bispo] (Cinco Casa Diagonal Direita)\n");
printf("3. [Rainha] (Oito Casa para Esquerda)\n");
printf("4. [Cavalo] (Oito Casa para Esquerda)\n\n");
printf("Selecione qual peça você quer que ande:\n");
scanf("%d", &menu);
system("clear");


//Função de Cada Peças
switch (menu) {


// Programa da Torre
case 1:
torre(5);
break;


//Programa do Bispo
case 2:
bispo(5);
break;


//Programa Rainha
case 3:
rainha(8);
break;


//Programa Cavalo
case 4:
for(int i = 1, j = 1; i <= 2; i++){
while(j <= 2) {
printf("[Cavalo] Moveu Para <<Cima>>\n");
j++;}
j = 1;
/*for(int j = 1; j <= 2; j++){
printf("[Rainha] Moveu Para <<Baixo>>\n");}*/
printf("[Cavalo] Moveu Para <<Direita>>\n");}
break;

}



}




    