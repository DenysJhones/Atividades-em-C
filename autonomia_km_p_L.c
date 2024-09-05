/* 
-----PORTUGOL----

ARGORITMO consumo_km/L

VAR
	REAL: consumo, distancia_km, litros_gastos;

INICIO
	ESCREVA("infome a distancia em km:");
	LEIA("distancia em km");
	
	ESCREVA("Infome a gantidade de litros gastos:");
	LEIA("litros_gastos");
	
	consumo ← disntancia_km / litros_gastos;
	
SE(consumo < 8) ENTÃO 
	ESCREVA("venda o carro!");
SENÃO SE(consumo > 12) ENTAO 
	ESCREVA("super economico!");
FIMALGORITMO */


#include <stdio.h>
	int main(){
		float consumo, distKM, litrosGast;
	printf("Descubra o consumo de seu veiculo\n");	
	printf("informe a distancia em km:");
	scanf("%f", &distKM);
	
	printf("informe a quantidade de litros gastos:");
	scanf("%f", &litrosGast);
	
	consumo = distKM / litrosGast;
	
	if(consumo < 8){
	printf("venda o carro!");}
	else{
		(consumo > 12);
	printf("super economico");}
	
		
		
		
		return 0;
	}