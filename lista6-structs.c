#include <stdio.h>
#include <string.h>

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

// exercicio 6
typedef struct {
    char nome[30];
    float temperatura;
    float saturacao;
} Paciente;

int emRisco(Paciente p) {
    if (p.temperatura > 32 || p.saturacao>92){
        return 1;
    }
    else {
        return 0;
    }
}

// exercicio 7
typedef struct {
    char titulo[40];
    int paginas;
    float preco;
} Livro;
Livro livros[4] = {
    {"O Hobbit", 310, 45.90},
    {"Dom Casmurro", 256, 29.90},
    {"1984", 328, 39.50},
    {"O Cortico", 240, 24.90}
};

void imprimirLivros(Livro livros[4]){
    for (int i=0;i<5;i++){
        printf("livro %d:", i+1);
        printf("%s", livros[i].titulo);
        printf("%d", livros[i].paginas);
        printf("%f", livros[i].preco);
    }
}

// exercicio 8
typedef struct{
    char nome[30];
    char especie[30];
    int idade;
    float p1;
    float p2;
    float p3;
    int apto;
} Animal;

float media_pesos(Animal ani){
    float media = (ani.p1+ani.p2+ani.p3)/3;
    return media;
}

void classificar_idade(Animal ani){
    if (ani.idade < 2){
        printf("Filhote");
    }
    else if (ani.idade >=2 && ani.idade <=5){
        printf("Jovem");
    }
    else if (ani.idade>5){
        printf("Adulto");
    }
}

int contar_especie(Animal animais[], char especie[]){
    int cont = 0;
    for (int i=0; i<6;i++){
        if (strcmp(animais[i].especie, especie) == 0){
            cont++;
        }
    }
    return cont;
}

int existe_apto(Animal animais[], char nome[]){
    for (int i=0;i<6;i++){
        if (strcmp(animais[i].nome, nome) == 0 && animais[i].apto == 1) {
            return 1;
        }
    }
    return 0;
}




// exercicio final
typedef struct{
    float pocoes;
    float defesa;
    float feitiços;
} Notas;

typedef struct {
    char nome[30];
    char casa[20];
    int ano;
    char caracteristica[50];
    Notas notas;
} Aluno;

float media_alunos(Aluno a){
    float media = (a.notas.defesa + a.notas.feitiços + a.notas.pocoes)/3;
    return media;
}

void classificar_aluno(Aluno a){
    float media = media_alunos(a);
    if (media>=9.0){
        printf("Aluno Excepcional");
    }
    else if (media>=7.0){
        printf("Bom Aluno");
    }
    else if (media>=5.0){
        printf("Aluno Regular");
    }
    else {
        printf("Aluno em risco");
    }
}

int contar_casa(Aluno alunos[], char casa[]){
    int cont = 0;
    for (int i=0;i<5;i++){
        if (strcmp(alunos[i].casa, casa) == 0){
            cont++;
        }   
    }
    return cont;
}

int existe_caracteristica(Aluno alunos[], char caracteristica[]){
    for (int i=0;i<5;i++){
        if (strcmp(alunos[i].caracteristica, caracteristica)==0){
            return 1;
        }
    }
    return 0;
}

float media_defesa(Aluno alunos[]){
    float media = 0;
    for (int i=0;i<5;i++){
        media += alunos[i].notas.defesa;
    }
    return media/5;
}

void imprimir_aluno(Aluno a){
    printf("Informações do aluno:\n");
    printf("Nome: %s\nCasa: %s\nAno: %d\nCaracteristica: %s\nDefesa: %f\nFeitiços: %f\nPoções: %f\n", a.nome, a.casa, a.ano, a.caracteristica, a.notas.defesa, a.notas.feitiços, a.notas.pocoes);
    printf("Media: %f\n", media_alunos(a));
    classificar_aluno(a);
    }

int main(){
    Aluno alunos[5] = {
    {"Harry Potter", "Grifinória", 5, "Corajoso", 8.0, 9.5, 8.5},
    {"Hermione Granger", "Grifinória", 5, "Inteligente", 10.0, 9.5, 10.0},
    {"Draco Malfoy", "Sonserina", 5, "Ambicioso", 8.5, 7.0, 8.0},
    {"Luna Lovegood", "Corvinal", 4, "Criativa", 7.0, 8.5, 9.0},
    {"Cedrico Diggory", "Lufa-Lufa", 6, "Leal", 8.0, 9.0, 8.5}
    };
    for (int i=0;i<5;i++){
        imprimir_aluno(alunos[i]);
    }
    char casa[20];
    printf("digite uma casa:");
    scanf("%19s", &casa[0]);
    int casas = contar_casa(alunos, casa);
    printf("quantidade de alunos da casa: %d\n", casas);
    char caracteristica[50];
    printf("agora digite uma caracteristica:");
    scanf("%19s", &caracteristica[0]); // aprendi que &string[0] é identico a string sozinho no scanf
    int existe = existe_caracteristica(alunos, caracteristica);
    if (existe){
        printf("existe pelo menos um aluno com essa caracteristica\n");
    }
    else{
        printf("não existe um aluno com essa caracteristica\n");
    }
    float mediadefesa = media_defesa(alunos);
    printf("media da turma em defesa contra as artes das trevas: %f\n", mediadefesa);
}
