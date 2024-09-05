/*• Escreva um programa em C que mostre ao usuário um menu com 4 opções de operações 
matemáticas, as mais básicas, peça dois valores numéricos, realize o cálculo, e mostre o 
resultado na tela.
 • Use a estrutura ESCOLHA... CASO para o condicional.
 • Lembre-se que divisão por zero não é possível.*/

#include <stdio.h>
	int main(){
		float resultado, num1, num2;
		int opcao;
		printf("Escolha uma operacao:\n");
		printf("(1) adicao\n");
		printf("(2) subtracao\n");
		printf("(3) multiplicao\n");
		printf("(4) divisao\n");
		printf("Digite opcao desejada 1,2,3,4:");
		scanf("%d", &opcao);
		
		printf("Digite o primeiro valor: ");
    	scanf("%f", &num1);
    	printf("Digite o segundo valor: ");
    	scanf("%f", &num2);
		
		switch(opcao) {
			case 1:
			 resultado = num1 + num2;
			printf("Adicao resultado: %d\n", resultado);
			break;
			
			case 2:
			 resultado = num1 - num2;
			printf("subtracao resultado: %d\n", resultado);
			break;
			
			case 3:
			 resultado = num1 * num2;
			printf("multiplicao resultado: %d\n", resultado);
			break;
			
			case 4:
			 resultado = num1 / num2;
			printf("divisao resultado: %d\n", resultado);
			break;
			if (num2 != 0) {
				resultado = num1 / num2;
			printf("resultado da divisao: %d\n",resultado);
			} else {
			printf("divisao por zero não permitida.\n");
			break;
			default:
				("escolha invalida porvafor escolha de 1 a 4.\n");
			}
			
			
		}
		
		
		return 0;
	}