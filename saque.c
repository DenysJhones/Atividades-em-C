/*Escreva um algoritmo que solicite do usuário o valor de um saque em caixa eletrônico, sendo 
que estarão disponíveis cédulas de 5, 10, 20, 50 e 100. O algoritmo deve apresentar a menor 
quantidade de cédulas possível de acordo com o saque. Exemplos: 
• Saque de 400,00: 4 cédulas de 100.
• Saque de 350,00: 3 cédulas de 100 e 1 cédula de 50.
• Saque de 385,00: 3 cédulas de 100, 1 cédula de 50, 1 cédula de 20, 1 cédula de 10 e 1 cédula de 5.*/

#include <stdio.h>
	int main(){
		int saque, cedulas100, cedulas50, cedulas20, cedulas10, cedulas5, cedulas1;
		
		printf("Digite o valoir do saque:");
		scanf("%d", &saque);
		
		cedulas100 = saque / 100;
		saque = saque % 100;
		printf("Cédulas de 100: %d\n", cedulas100);
		
		cedulas50 = saque / 50;
		saque = saque % 50;
		printf("Cédulas de 50: %d\n", cedulas50);
		
		cedulas20 = saque / 20;
		saque = saque % 20;
		printf("Cédulas de 20: %d\n", cedulas20);
		
		cedulas10 = saque / 10;
		saque = saque % 10;
		printf("Cédulas de 10: %d\n", cedulas10);
		
		cedulas5 = saque / 5;
		saque = saque % 5;
		printf("Cédulas de 5: %d\n", cedulas5);
		
		cedulas1 = saque / 0;
		cedulas1 % 0;
		printf("Cédulas de 1: %d\n", cedulas1);
		
	return 0;	
	}
		