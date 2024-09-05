#include <stdio.h>
    int main(){
        int dia;
        printf("Infome numero de 1 a 7 para cada dia da semana:");
        scanf("%d", &dia);

        switch (dia) {
            case 01:
            printf("Segunda-feira\n");
            break;
            case 02:
            printf("terça-feira\n");
            break;
            case 03:
            printf("quarta-feira\n");
            break;
            case 04:
            printf("quinta-feira\n");
            break;
            case 05:
            printf("sexta-feira\n");
            break;
            case 06:
            printf("sabado-feira\n");
            break;
            case 07:
            printf("domingo\n");
            break;
            
            default:
            printf("Numero invalido seu burro");
        }
    
    }
