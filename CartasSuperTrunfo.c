#include <stdio.h>

int main () {
    //  Coloquei o numero  2 ao final de cada variavel de mesmo nome para a entrada de dados da segunda carta
    // turis = Pontos turisticos / popul = População
    // cidad = Nome da cidade / estad = Nome do estado
    // letra = Letra da carta / numero = Numero da carta
    // denpopul = Densidade populacional
    int turis, popul, turis2, popul2;
    float area, pib, area2, pib2, denpopul, denpopul2, pibper, pibper2;
    char cidad[50], estad[50], cidad2[50], estad2[50];  
    char letra, numero, letra2, numero2; 
   
    
    


        /*Digite os dados que são pedidos seguindo a ordem de jogada de cada jogador 
     Leia a informação que esta sendo requisitada
     Jogador 1 insere o dado de sua carta
     Jogador 2 insere o dado de sua carta 
     Ao final de todas as perguntas são exibidas ambas as cartas na interface
    */
     
    /*    CARTAS PARA TESTE
Numero : 1                               Numero : 2
Letra: A                                 Letra: B
Código: A01                              Código: B02
Nome do Estado: Bahia                    Nome do Estado: Ceara
Nome da Cidade: Salvador                 Nome da Cidade: Fortaleza
Número de Pontos Turísticos: 50          Número de Pontos Turísticos: 30 
População:    2417678                    População: 2428678 
Área: 693.442 km²                        Área: 312.353 km²
PIB:  62954487490 bilhões de reais       PIB: 73436128432 bilhões de reais
Densidade Populacional: 3486.5 hab/km²   Densidade Populacional: 7775.4 hab/km²
PIB per Capita: 21706.06 reais           PIB per Capita: 27164.45 reais
    */
   //Abaixo caixa de perguntas com as entradas de dados
   printf("***INSIRA OS DADOS***\n");
   printf("Numero da Carta: \n");
   printf("Jogador 1\n");
   scanf(" %c", &numero);
   printf("Jogador 2\n");
   scanf(" %c", &numero2);

   printf("Letra da carta: \n");
   printf("Jogador 1\n");
   scanf(" %c", &letra);
   printf("Jogador 2\n");
   scanf(" %c", &letra2);
   
   printf("Nome do Estado: \n");
   printf("Jogador 1\n");
   scanf(" %s", &estad);
   printf("Jogador 2\n");
   scanf(" %s", &estad2);
   
   printf("Nome da cidade: \n");
   printf("Jogador 1\n");
   scanf("%s", &cidad);
   printf("Jogador 2\n");
   scanf("%s", &cidad2);

   printf("Tamanho da população: \n");
   printf("Jogador 1\n");
   scanf("%d", &popul);
   printf("Jogador 2\n");
   scanf("%d", &popul2);

   printf("Area total: \n");
   printf("Jogador 1\n");
   scanf("%f", &area);
   printf("Jogador 2\n");
   scanf("%f", &area2);

   printf("Valor do PIB \n");
   printf("Jogador 1\n");
   scanf("%f", &pib);
   printf("Jogador 2\n");
   scanf("%f", &pib2);

   printf("Numero de pontos turisticos \n");
   printf("Jogador 1\n");
   scanf("%d", &turis);
   printf("Jogador 2\n");
   scanf("%d", &turis2);    
   
   /*  
   Utilizei um casting (float) pois a população "popul" é int é a area e o pib é float
   forçando a conversão para que não haja perda de dados
   */
//Formula para calcular a decidade populacional 
   denpopul = (float) popul / area; 
   denpopul2 = (float) popul2 / area2;
 //Formula para calcular pib per capita
   pibper = (float) pib / popul;
   pibper2 = (float) pib2 / popul2;
    
   
   //  Saida de dados (Carta do jogador 1 e do jogador 2 são exibidas)
   printf("***VALORES DAS CARTAS 1 E 2***\n");
printf("***CARTA JOGADOR 1***\n Codigo da Carta: %c %c\n Estado:%s\n Cidade:%s\n Pontos turisticos:%d\n População: %d\n Area: %.3f km²\n PIB: %.2f bilhões de reais\n Densidade populacional: %.2f hab/km²\n PIB per capita: %.2f de reais\n", letra, numero, estad, cidad, turis, popul, area, pib, denpopul, pibper);
printf("***CARTA JOGADOR 2***\n Codigo da Carta: %c %c\n Estado:%s\n Cidade:%s\n Pontos turisticos:%d\n População: %d\n Area: %.3f km²\n PIB: %.2f bilhões de reais\n Densidade populacional: %.2f hab/km²\n PIB per capita: %.2f  de reais\n", letra2, numero2, estad2, cidad2, turis2, popul2, area2, pib2, denpopul2, pibper2);
    

// Super Poder a soma de todos os atrributos da carta
 int superpoderA = (float) pib + area + popul + pibper + denpopul;
 int superpoderB =  (float)  pib2 + area2 + popul2 + pibper2 + denpopul2;
 
 printf("***VALOR DO SUPER PODER DA CARTA 1 E 2***\n"); 
 printf("Super Poder da carta 1 é: %d\n", superpoderA);
 printf("Super Poder da carta 2 é: %d\n", superpoderB);

 // Comparação  1=carta1 vence/ 0=Carta2 vence
printf("***COMPARAÇÃO DAS CARTAS 1 E 2***\n");
int comparacaopopul = popul > popul2;
int comparacaoarea = area > area2;
int comparacaopib = pib > pib2;
int comparacaoturis = turis > turis2;
int comparacaodenpopul = denpopul > denpopul2;
int comparacaopiper = pibper > pibper2;
int comparacaosuperpoder = superpoderA > superpoderB;
   printf("População da carta 1: %d é maior que a população da carta 2: %d ? %d \n", popul, popul2, comparacaopopul);
   printf("Area da carta 1: %.3f é  maior que a area da carta 2: %.3f ? %d \n", area, area2, comparacaoarea);
   printf("PIB da carta 1: %.2f é maior que o PIB da carta 2: %.2f ? %d \n", pib, pib2, comparacaopib);
   printf("Numero de pontos turisticos da carta 1: %d é maior que o numero de pontos turisticos da carta 2: %d? %d \n", turis, turis2, comparacaoturis);
   printf("Densidade populacional da carta 1: %.2f é maior que a densidade populacional da carta 2: %.2f? %d \n", denpopul, denpopul2, comparacaodenpopul);
   printf("PIB per carpita da carta 1: %.2f é maior que o PIB per capita da carta 2: %.2f? %d \n", pibper, pibper2, comparacaopiper);
   printf("Super poder da carta 1: %d é maior que o Super poder da carta 2: %d? %d \n", superpoderA, superpoderB, comparacaosuperpoder);
  

return 0;
}





