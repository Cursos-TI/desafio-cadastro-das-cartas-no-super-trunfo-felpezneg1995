#include <stdio.h>

int main () {
    //  Coloquei o numero  2 ao final de cada variavel de mesmo nome para a entrada de dados da segunda carta
    // turis = Pontos turisticos / popul = População
    // cidad = Nome da cidade / estad = Nome do estado
    // letra = Letra da carta / numero = Numero da carta
    // denpopul = Densidade populacional
    int turis, popul, turis2, popul2;
    float area, pib, area2, pib2, denpopul, denpopul2; 
    char cidad[50], estad[50], cidad2[50], estad2[50];  
    char letra, numero, letra2, numero2; 
   
    


        /*Digite os dados que são pedidos seguindo a ordem de jogada de cada jogador 
     Leia a informação que esta sendo requisitada
     Jogador 1 insere o dado de sua carta
     Jogador 2 insere o dado de sua carta 
     Ao final de todas as perguntas são exibidas ambas as cartas na interface
    */
     
    /*    CARTAS PARA TESTE
Numero 1:                                Numero 2:
Letra: A                                 Letra: B
Código: A01                              Código: B02
Nome do Estado: São_Paulo                Nome do Estado: Rio_de_Janeiro
Nome da Cidade: São_Paulo                Nome da Cidade: Rio_de_Janeiro
Número de Pontos Turísticos: 50          Número de Pontos Turísticos: 30 
População: 12325000                      População: 6748000
Área: 1521.11 km²                        Área: 1200.25 km²
PIB: 699.28 bilhões de reais             PIB: 300.50 bilhões de reais
Densidade Populacional: 8102.47 hab/km²  Densidade Populacional: 5622.24 hab/km²

    */
   //Abaixo caixa de perguntas com as entradas de dados
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
   scanf("%s", &estad);
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
   
   /*Formula para calcular a decidade populacional  
   Utilizei um casting (float) pois a população "popul" é int é a area é float
   forçando a conversão para que não haja perda de dados
   */

   denpopul = (float) popul / area; 
   denpopul2 = (float) popul2 / area2;
   
   //  Saida de dados (Carta do jogador 1 e do jogador 2 são exibidas)
printf("CARTA JOGADOR 1\n Codigo da Carta: %c %c\n Estado:%s\n Cidade:%s\n Pontos turisticos:%d\n População: %d\n Area: %.2f km²\n PIB: %.2f bilhões de reais\n Densidade populacional: %.2f hab/km²\n", letra, numero, estad, cidad, turis, popul, area, pib, denpopul);
printf("CARTA JOGADOR 2\n Codigo da Carta: %c %c\n Estado:%s\n Cidade:%s\n Pontos turisticos:%d\n População: %d\n Area: %.2f km²\n PIB: %.2f bilhões de reais\n Densidade populacional: %.2f hab/km²\n", letra2, numero2, estad2, cidad2, turis2, popul2, area2, pib2, denpopul2);
    return 0;
    
}




