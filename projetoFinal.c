#include <stdio.h>
#include <stdlib.h>

int seletor();
int calculadora(int);
int buscaOperando();


float soma(float, float);
float sub(float, float);
float mult(float, float);
float divisao(float, float);

int main() {
    while(1){
        int op = seletor();
        calculadora(op); 
    }
}


int calculadora(int x){
    if(x > 4 || x < 0) {exit(0);} // Fecha o programa
    
    // Solicita ao usuario os operandos
    float operandos[2], res;
    printf("Escreva o operando 1: ");
    scanf("%f", &operandos[0]);
    printf("\nEscreva o operando 2: ");
    scanf("%f", &operandos[1]);


    //Envia os operandos para as funções e printa os resultados
    switch (x) {
        case 1: 
            res = soma(operandos[0], operandos[1]);
            printf("O resultado e %.2f \n", res);
            break;
        case 2: 
            res = sub(operandos[0], operandos[1]);
            printf("O resultado e %.2f \n", res);
            break;
        case 3:
            res = mult(operandos[0], operandos[1]);
            printf("O resultado e %.2f \n", res);
            break;
        case 4:
            res = divisao(operandos[0], operandos[1]);
            printf("O resultado e %.2f \n", res);
            break;   
    } 
}


// Operações
float soma(float x, float y){
    return x + y;
}
float sub(float x, float y){
    return x - y;
}
float mult(float x, float y) {
    return x*y;
}
float divisao(float x, float y){
    return x/y;
}




//Lê qual operação deve ser realizada.
int seletor() {
    int operador;

    printf("Escolha uma opcao abaixo \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    printf("5 - Fechar \n\n");

    scanf("%d", &operador);
    printf("\n");

    return operador;
}