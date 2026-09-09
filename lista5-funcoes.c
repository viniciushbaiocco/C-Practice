#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

double calcularserieharmonica(int n){
    double soma = 0;
    for (int i=1; i<=n; i++){
        soma += 1.0/i;
    }
    return soma;
}

// exercicio 1
// int main(){
//     int n;
//     scanf("%d", &n);
//     double resultado = calcularserieharmonica(n);
//     printf("resultado: %.2lf", resultado);
//     return 0;
// }

int calcularmeses(float saldoinicial, float aporte, float meta){
    int cont = 0;
    while (saldoinicial<meta){
        saldoinicial+= aporte;
        cont++;
    }
    return cont;
}

// exercicio 2
// int main(){
//     float saldoinicial, aporte, meta;
//     scanf("%f %f %f", &saldoinicial, &aporte, &meta);
//     int meses = calcularmeses(saldoinicial, aporte, meta);
//     printf("%d", meses);
// }

int classificarDesempenho(int pontos) {
    if (pontos < 25) {
        return 1;
    } else if (pontos <= 39) {
        return 2;
    } else {
        return 3;
    }
}

// exercicio 3
// int main() {
//     int pontos, classificacao, fracos = 0, bons = 0, excelentes = 0, totalpontos = 0;
//     for (int i = 1; i <= 8; i++) {
//         do {
//             scanf("%d", &pontos);
//             if (pontos<0 || pontos>50) {
//                 printf("pontuacao invalida");
//             }
//         } while (pontos < 0 || pontos > 50);
//         totalpontos += pontos;
//         classificacao = classificarDesempenho(pontos);
//         if (classificacao == 1) {
//             fracos++;
//         } else if (classificacao == 2) {
//             bons++;
//         } else if (classificacao == 3) {
//             excelentes++;
//         }
//     }
//     float media = (float)totalpontos / 8;
//     printf("quantidade fraca: %d\n", fracos);
//     printf("quantidade boa: %d\n", bons);
//     printf("quantidade excelente: %d\n", excelentes);
//     printf("media de pontos da equipe: %.2f\n", media);
//     return 0;
// }

int lancardado(){
    int numero = (rand() % 6) + 1;
    return numero;
}

// exercicio 4
// int main(){
//     int soma_dados, cont_iguais=0, rodadasmaior10=0;
//     srand(time(NULL));
//     for (int i = 0; i<20; i++){
//         int dado1 = lancardado();
//         int dado2 = lancardado();
//         printf("Dado 1: %d\n", dado1);
//         printf("Dado 2: %d\n", dado2);
//         soma_dados = dado1+dado2;
//         if (dado1 == dado2){
//             cont_iguais++;
//         }
//         if (soma_dados>=10){
//             rodadasmaior10++;
//         }
//     }
//     printf("%d %d", cont_iguais, rodadasmaior10);
//     return 0;
// }

// exercicio 5
int validarSenha(char senha[100]){
    int maiuscula = 0, minuscula = 0, num = 0;
    int tamanho = strlen(senha);
    if (tamanho < 8){
        return 0;
    }
    for (int i = 0; i < tamanho; i++){
        if (senha[i] >= 'A' && senha[i] <= 'Z'){
            maiuscula = 1;
        }
        if (senha[i] >= 'a' && senha[i] <= 'z'){
            minuscula = 1;
        }
        if (senha[i] >= '0' && senha[i] <= '9'){
            num = 1;
        }
    }
    if (maiuscula && minuscula && num){
        return 1;
    }
    else {
        return 0;
    }
}

// int main(){
//     char senha[100];
//     int cadastrada = 0;
//     for (int i = 0; i < 4; i++){
//         scanf(" %99s", senha);
//         if (validarSenha(senha)){
//             printf("SENHA CADASTRADA COM SUCESSO\n");
//             cadastrada = 1;
//             break;
//         }
//         else {
//             printf("SENHA INVALIDA\n");
//         }
//     }
//     if (!cadastrada){
//         printf("CADASTRO BLOQUEADO\n");
//     }
//     return 0;
// }
