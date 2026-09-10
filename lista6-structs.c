#include <stdio.h>

// exercicio 1
int buscarvalor(int vet[6], int valor){
    int posicao;
    for (int i=0; i<6; i++){
        if (vet[i] == valor){
            return posicao = i+1;
        }
    }
    return -1;
}

// int main(){
//     int vet[6],valor;
//     for (int i=0;i<6;i++){
//         scanf("%d", &vet[i]);
//     }
//     scanf("%d", &valor);
//     int achou = buscarvalor(vet, valor);
//     if (achou == -1){
//         printf("nao encontrado");
//     } else {
//     printf("o valor %d foi achado na posição %d", valor, achou);
//     }
// }

// exercicio 2
typedef struct {
    char titulo[30];
    char genero;
} Filme;

Filme lerfilme(){
    Filme f;
    fgets(f.titulo, sizeof(f.titulo), stdin);
    scanf(" %c", &f.genero);
    return f;
}

void imprimirfilme(Filme f){
    printf("%s", f.titulo);
    switch (f.genero){
    case 'A':
        printf("Ação");
        break;
    case 'C':
        printf("Comédia");
        break;
    case 'D':
        printf("Drama");
        break;
    case 'T':
        printf("Terror");
        break;
    case 'F':
        printf("Ficção");
        break;
    default:
        printf("genero desconhecido");
    }
}

// int main(){
//     Filme f;
//     f = lerfilme();
//     imprimirfilme(f);
// }

// exercicio 3
int totalvendas(int vendas[3][5], int linha){
    int soma = 0;
    for (int i=0;i<5;i++){
        soma+=vendas[linha][i];
    }
    return soma;
}

// int main(){
//     int vendas[3][5], idproduto;
//     for (int i=0;i<3;i++){
//         for (int j=0;j<5;j++){
//             scanf("%d", &vendas[i][j]);
//         }
//     }
//     scanf("%d", &idproduto);
//     if (idproduto < 1 || idproduto > 3){
//         printf("produto invalido");
//         return 0;
//     }
//     int total = totalvendas(vendas, idproduto-1);
//     printf("%d", total);
// }

//exercicio 4
typedef struct{
int idade;
char nome[50];
float tempos[3];
} Atleta;

float media(Atleta atl){
    float soma = 0;
    for(int i=0; i<3; i++){
        soma += atl.tempos[i];
    }
    return soma/3.0;
}

// int main(){
//     Atleta a;
//     fgets(a.nome, sizeof(a.nome), stdin);
//     scanf("%d", &a.idade);
//     for (int i=0; i<3; i++){
//         scanf("%f", &a.tempos[i]);
//     }
//     float med = media(a);
//     printf("nome: %s media: %f", a.nome, med);
//     return 0;
// }

// exercicio 5
float consumo(float v[5]){
    float total = 0;
    float media = 0;
    for (int i=0;i<5;i++){
        total+= v[i];
    }
    return media = total/5;
}

void maioremenor(float v[], float *maior, float *menor){
    *maior = v[0];
    *menor = v[0];
    for (int i=0;i<5;i++){
        if (v[i] > *maior){
            *maior = v[i];
        }
        if (v[i] < *menor){
            *menor = v[i];
        }
    }
}

// int main(){
//     float vetor[5];
//     for (int i=0;i<5;i++){
//         scanf("%f", &vetor[i]);
//     }
//     float media = consumo(vetor);
//     float maior,menor;
//     maioremenor(vetor, &maior, &menor);
//     printf("%f\n", media);
//     printf("maior %f menor %f ", maior, menor);
// }