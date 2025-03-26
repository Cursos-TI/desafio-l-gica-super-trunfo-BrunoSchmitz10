#include <stdio.h>

typedef struct {
    char estado [3]; // Código do estado (ex: A, B)
    char codigo[4];  // Código da cidade (ex: A01, B02)
    char cidade[50]; 
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    
} Carta; 

int main() {
    // Duas cartas
    Carta carta1, carta2;
    int opcao1, opcao2;

    // primeira carta
    printf("==== Insira os dados da Primeira Carta ====\n");
        printf("Digite o código do primeiro Estado: (Ex: A)\n ");
        scanf("%s", carta1.estado);
        printf("Digite o nome da cidade:\n");
        scanf(" %[^\n]", carta1.cidade);
        printf("Digite o código da primeira cidade: (Ex: A01)\n ");
        scanf("%3s", carta1.codigo);
        printf("Digite a população:\n");
        scanf("%d", &carta1.populacao);
        printf("Digite a área:\n");
        scanf("%f", &carta1.area);
        printf("Digite o PIB:\n");
        scanf("%f", &carta1.pib);
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &carta1.pontosturisticos);
    
    // CALCULO DE VALORES CARTA 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibpercapita = carta1.pib / carta1.populacao;
    
    // segunda carta
    printf("\n==== Insira os dados da Segunda Carta ====\n");
        printf("Digite o código do segundo Estado: (Ex: B)\n");
        scanf("%s", carta2.estado);
        printf("Digite o nome da cidade:\n");
        scanf(" %[^\n]", carta2.cidade);
        printf("Digite o código da segunda cidade: (Ex: B01)\n");
        scanf("%3s", carta2.codigo);
        printf("Digite a população:\n");
        scanf("%d", &carta2.populacao);
        printf("Digite a área:\n");
        scanf("%f", &carta2.area);
        printf("Digite o PIB:\n");
        scanf("%f", &carta2.pib);
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &carta2.pontosturisticos);

    // CALCULO DE VALORES CARTA 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibpercapita = carta2.pib / carta2.populacao;
    
    // Exibição dos dados cadastrados
        printf("\n===== DADOS DA PRIMEIRA CIDADE =====\n");
        printf("Estado: %s\n", carta1.estado);
        printf("Código: %s\n", carta1.codigo);
        printf("Cidade: %s\n", carta1.cidade);
        printf("População: %d Habitantes\n", carta1.populacao);
        printf("Área: %.2f km²\n", carta1.area);
        printf("PIB R$: %.2f\n", carta1.pib);
        printf("Pontos turísticos: %d\n", carta1.pontosturisticos);
        printf("Densidade Populacional: %.2f Habitantes por Km²\n", carta1.densidade);
        printf("PIB per Capita R$: %.2f\n", carta1.pibpercapita);

        printf("\n===== DADOS DA SEGUNDA CIDADE =====\n");
        printf("Estado: %s\n", carta2.estado);
        printf("Código: %s\n", carta2.codigo);
        printf("Cidade: %s\n", carta2.cidade);
        printf("População: %d Habitantes\n", carta2.populacao);
        printf("Área: %.2f km²\n", carta2.area);
        printf("PIB R$: %.2f\n", carta2.pib);
        printf("Pontos turísticos: %d\n", carta2.pontosturisticos);
        printf("Densidade Populacional: %.2f Habitantes por Km²\n", carta2.densidade);
        printf("PIB per Capita R$: %.2f\n", carta2.pibpercapita);

        //Calcúlo de Super Poder            
       printf("\n===== Bônus! SUPER PODER =====\n");     
       float superpoder1 = (carta1.populacao + carta1.area + carta1.pib + carta1.pontosturisticos + carta1.pibpercapita) / carta1.densidade;
       float superpoder2 = (carta2.populacao + carta2.area + carta2.pib + carta2.pontosturisticos + carta2.pibpercapita) / carta2.densidade;
       
       printf("O valor do Super Poder da carta 1 é: %.2f\n", superpoder1);
       printf("O valor do Super Poder da carta 2 é: %.2f\n", superpoder2);

    // Menu de seleçao 

    printf("\n==== Escolha o Primeiro Atributo ====\n");
    printf("Escolha uma opção\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");  
    printf("4. Número de Pontos turísticos\n");
    printf("5. Densidade Populacional\n");  
    printf("6. PIB per Capita\n");    
    printf("Escolha: ");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
   case 1:
      printf("\n A Poupulação da carta 1 é: %d Habitantes e a População da carta 2 é: %d Habitantes\n",carta1.populacao, carta2.populacao);
       carta1.populacao < carta2.populacao ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
   break;
   case 2:
      printf("\n A Área da carta 1 é: %.2f km² e a Área da carta 2 é: %.2f km²\n",carta1.area, carta2.area);
       carta1.area < carta2.area ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
   break;   
   case 3:
      printf("\n O PIB da carta 1 é R$: %.2f e o PIB da carta 2 é R$: %.2f\n", carta1.pib, carta2.pib);
       carta1.pib < carta2.pib ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
   break;
   case 4:
      printf("\n O Número de Pontos turísticos da carta 1 é: %d e o Número de Pontos turísticos da carta 2 é: %d\n",carta1.pontosturisticos, carta2.pontosturisticos);
       carta1.pontosturisticos < carta2.pontosturisticos ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
   break;    
   case 5:
      printf("\n A Densidade Populacional da carta 1 é: %.2f Habitantes por Km² e a Densidade Populacional da carta 2 é: %.2f Habitantes por Km²\n",carta1.densidade, carta2.densidade);
       carta1.densidade > carta2.densidade ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
   break;
   case 6:
      printf("\n O PIB per Capita da carta 1 é R$: %.2f e o PIB per Capita da carta 2 é R$: %.2f\n",carta1.pibpercapita, carta2.pibpercapita);
       carta1.pibpercapita < carta2.pibpercapita ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n"); 
   break;
   case 7:
      printf("\n O SUPER PODER da carta 1 é: %.2f e o SUPER PODER da carta 2 é: %.2f\n",superpoder1, superpoder2);
      superpoder1 < superpoder2 ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");   
   break; 
   default:
    printf("\n**** Opção inválida ****\n");  
   break;
    }

    // Segundo atributo

    printf("\n==== Escolha o Segundo Atributo ====\n");
    printf("Escolha uma opção\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");  
    printf("4. Número de Pontos turísticos\n");
    printf("5. Densidade Populacional\n");  
    printf("6. PIB per Capita\n");
    printf("7. SUPER PODER\n");       
    printf("Escolha: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
      printf("\n==== Você escolheu o mesmo Atributo ====\n");   
    } else {    

      switch (opcao2)
    {
    case 1:
        printf("\n A Poupulação da carta 1 é: %d Habitantes e a População da carta 2 é: %d Habitantes\n",carta1.populacao, carta2.populacao);
         carta1.populacao < carta2.populacao ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
    break;
    case 2:
        printf("\n A Área da carta 1 é: %.2f km² e a Área da carta 2 é: %.2f km²\n",carta1.area, carta2.area);
         carta1.area < carta2.area ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
    break;   
    case 3:
        printf("\n O PIB da carta 1 é R$: %.2f e o PIB da carta 2 é R$: %.2f\n", carta1.pib, carta2.pib);
         carta1.pib < carta2.pib ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
    break;
    case 4:
        printf("\n O Número de Pontos turísticos da carta 1 é: %d e o Número de Pontos turísticos da carta 2 é: %d\n",carta1.pontosturisticos, carta2.pontosturisticos);
         carta1.pontosturisticos < carta2.pontosturisticos ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
    break;    
    case 5:
        printf("\n A Densidade Populacional da carta 1 é: %.2f Habitantes por Km² e a Densidade Populacional da carta 2 é: %.2f Habitantes por Km²\n",carta1.densidade, carta2.densidade);
         carta1.densidade > carta2.densidade ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n");
    break;
    case 6:
        printf("\n O PIB per Capita da carta 1 é R$: %.2f e o PIB per Capita da carta 2 é R$: %.2f\n",carta1.pibpercapita, carta2.pibpercapita);
         carta1.pibpercapita < carta2.pibpercapita ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n"); 
    break;
    case 7:
        printf("\n O SUPER PODER da carta 1 é: %.2f e o SUPER PODER da carta 2 é: %.2f\n",superpoder1, superpoder2);
        superpoder1 < superpoder2 ? printf("\n**** Carta 2 Ganhou ****\n") : printf("\n**** Carta 1 Ganhou ****\n"); 
    break; 
    default:
    printf("\n**** Opção inválida ****\n");  
    break;
    }
   }

// Soma das cartas escolhidas
float somaCarta1 = 0, somaCarta2 = 0;

switch (opcao1) {
    case 1: somaCarta1 += carta1.populacao; somaCarta2 += carta2.populacao; break;
    case 2: somaCarta1 += carta1.area; somaCarta2 += carta2.area; break;
    case 3: somaCarta1 += carta1.pib; somaCarta2 += carta2.pib; break;
    case 4: somaCarta1 += carta1.pontosturisticos; somaCarta2 += carta2.pontosturisticos; break;
    case 5: somaCarta1 -= carta1.densidade; somaCarta2 -= carta2.densidade; break; 
    case 6: somaCarta1 += carta1.pibpercapita; somaCarta2 += carta2.pibpercapita; break;
    case 7: somaCarta1 += superpoder1; somaCarta2 += superpoder2; break;
}

switch (opcao2) {
    case 1: somaCarta1 += carta1.populacao; somaCarta2 += carta2.populacao; break;
    case 2: somaCarta1 += carta1.area; somaCarta2 += carta2.area; break;
    case 3: somaCarta1 += carta1.pib; somaCarta2 += carta2.pib; break;
    case 4: somaCarta1 += carta1.pontosturisticos; somaCarta2 += carta2.pontosturisticos; break;
    case 5: somaCarta1 -= carta1.densidade; somaCarta2 -= carta2.densidade; break; 
    case 6: somaCarta1 += carta1.pibpercapita; somaCarta2 += carta2.pibpercapita; break;
    case 7: somaCarta1 += superpoder1; somaCarta2 += superpoder2; break;
}

printf("\n==== Resultado da Soma dos Atributos ====\n");
printf("Soma da Carta 1: %.2f\n", somaCarta1);
printf("Soma da Carta 2: %.2f\n", somaCarta2);

// Comparação das somas para definir o vencedor
    if (somaCarta1 > somaCarta2) {
    printf("\n**** Carta 1 Ganhou a Rodada! ****\n");
}   else if (somaCarta2 > somaCarta1) {
    printf("\n**** Carta 2 Ganhou a Rodada! ****\n");
}   else {
    printf("\n**** Empate! ****\n");
}
    return 0;
}


