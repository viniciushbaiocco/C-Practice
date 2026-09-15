#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// exercicio 1

// int main(){
//     int moedas = 18;
//     int *ptr = &moedas;
//     printf("%d", moedas);
//     printf("%p", &moedas);
//     printf("%p", ptr);
//     printf("%d", *ptr);
// }

// exercicio 2

// int main(){
//     float temperatura = 36.8;
//     float *ptr = &temperatura;
//     printf("temp original: %f", temperatura);
//     *ptr += 2;
//     printf("%f", temperatura);
// }

// exercicio 3

// int main(){
//     char categoria = 'c';
//     char *ptr = &categoria;
//     printf("letra associada: %c", categoria);
//     printf("endereço da var: %p", ptr);
//     printf("conteudo acessado pelo ptr: %d", *ptr);
//     *ptr = 'a';
//     printf("novo conteudo de categoria: %c", categoria);
// }

// exercicio 4

// int main(){
//     int vidas = 3;
//     float moedas_magicas = 9.5;
//     char nivel = 'B';
//     int *ptr_vidas = &vidas;
//     float *ptr_moedas = &moedas_magicas;
//     char *ptr_nivel = &nivel;
//     *ptr_vidas = 5;
//     *ptr_moedas = 15.0;
//     *ptr_nivel = 'A';
//     printf("%d\n %f\n %c", *ptr_vidas, *ptr_moedas, *ptr_nivel);
// }

// exercicio 5

// int main(){
//     int leitura1 = 10;
//     int leitura2 = 25;
//     int *ptr = &leitura1;
//     printf("%d", *ptr);
//     ptr = &leitura2;
//     printf("%d", *ptr);
//     *ptr = 40;
//     printf("%d", *ptr);
// }

// exercicio 6

void inc_dev(int *a, int *b){
    *a -= 1;
    *b += 1;
}

// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d %d", a, b);
//     inc_dev(&a, &b);
//     printf("%d %d", a, b);
// }

// exercicio 7

void troca_valor(int *a, int *b){
    int copia = *b;
    *b = *a;
    *a = copia;
}

// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d %d", a,b);
//     troca_valor(&a, &b);
//     printf("%d %d", a,b);
// }

// exercicio 8

void calcula_perimetro(float raio, float *pPerimetro, float *pArea){
    *pPerimetro = 2*3.14159*raio;
    *pArea = 3.14159*raio*raio;
}

// int main(){
//     float perimetro,area,raio;
//     scanf("%f %f %f",&raio, &perimetro, &area);
//     calcula_perimetro(raio, &perimetro, &area);
// }

// exercicio 9

void calcula_hora(int totalMinutos, int *pHora, int *pMinuto){
    *pHora = totalMinutos/60;
    *pMinuto = totalMinutos%60;
    printf("%d:%.2d", *pHora, *pMinuto);
}

// int main(){
//     int totalminutos, phora, pminuto;
//     scanf("%d", &totalminutos);
//     calcula_hora(totalminutos, &phora, &pminuto);
// }

// exercicio 10

void max_min(int v[], int tam, int *pmin, int *pmax){
    *pmin = v[0];
    *pmax = v[0];
    for (int i=0;i<tam;i++){
        if (v[i]>*pmax){
            *pmax = v[i];
        }
        if (v[i]<*pmin){
            *pmin = v[i];
        }
    }
}

// int main(){
//     int v[6];
//     int tam=6;
//     int pmin,pmax;
//     max_min(v, tam, &pmin, &pmax);
//     printf("%d \n %d", pmax,pmin);
// }

// exercicio 11

void max_vetor(float vet[], int tam, float *pmax, int *pindice){
    *pmax = vet[0];
    for (int i=0;i<tam;i++){
        if (vet[i]>*pmax){
            *pmax = vet[i];
            *pindice = i;
        }
    }
}

// int main(){
//     float v[6],pmax;
//     int tam=6, pindice;
//     for (int i=0;i<tam;i++){
//         scanf("%f", &v[i]);
//     }
//     max_vetor(v, tam, &pmax, &pindice);
// }

// exercicio 12

void calcular_movimento(float distancia, float tempo, float *velocidade, float *aceleracao){
    *velocidade = distancia/tempo;
    *aceleracao = *velocidade/tempo;
}

// exercicio 13

void registrar_venda(int vendidos, int *estoque){
    *estoque -= vendidos;
    if (*estoque<0){
        *estoque = 0;
    }
}

// int main(){
//     int estoque,vendidos;
//     scanf("%d %d", &estoque, &vendidos);
//     printf("estoque inicial: %d", estoque);
//     registrar_venda(vendidos, &estoque);
//     printf("estoque final: %d", estoque);
// }

// exercicio 14

void calcula_clima(float tMin, float tMax, float *pMedia, float *pAmplitude){
    *pMedia=(tMax+tMin)/2;
    *pAmplitude=tMax-tMin;
}

// exercicio 15 -- continuação do 14, enunciado diz ainda considerando o ex14

float calcula_indice(float pmedia, float umidade){
    float indice=pmedia + 0.05*umidade;
    return indice;
}

// int main(){
//     float tmin,tmax,pmedia,pamplitude,umidade;
//     scanf("%f %f %f", &tmin,&tmax,&umidade);
//     calcula_clima(tmin, tmax, &pmedia, &pamplitude);
//     float indice = calcula_indice(pmedia, umidade);
//     printf("media: %f\n", pmedia);
//     printf("amplitude: %f\n", pamplitude);
//     printf("indice: %f\n", indice);
// }

// exercicio aula 1

void arealateral_pressao(double raio, float altura, float *Alateral, float *Pressao){
    *Alateral = 2*3.14159*raio*altura;
    *Pressao = 1000*9.81*altura;
}

// int main(){
//     double raio;
//     float altura,alateral,pressao;
//     scanf("%lf %f", &raio, &altura);
//     arealateral_pressao(raio, altura, &alateral, &pressao);
//     printf("Area lateral: %f", alateral);
//     printf("\n Pressao: %f", pressao);
// }

// exercicio aula 2

struct tipo_instituicao {
    char nome[30];
    char tipo[20];
};
struct tipo_investimento {
    char nome[30];
    float valor_aplicado;
    float taxa_rendimento;
    struct tipo_instituicao instituicao;
    float rendimentos[3];
}
Investimentos[4] ={
{"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"},
{14.50, 15.20, 14.80}},
{"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"},
{30.10, 31.50, 29.90}},
{"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"},
{22.40, 21.80, 23.10}},
{"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"},
{48.00, 50.25, 47.90}}
};

float media_valores(){
    float media = 0;
    for (int i=0;i<4;i++){
        media+= Investimentos[i].valor_aplicado;
    }
    return media/=4;
}

int num_tipo_instituicao(char tipo[]){
    int cont = 0;
    for (int i=0;i<4;i++){
        if (strcmp(Investimentos[i].instituicao.tipo, tipo)==0){
            cont++;
        }
    }
    return cont;
}

int conta_investimentos_letra(char letra){
    int cont=0;
    for (int i=0;i<4;i++){
        if (Investimentos[i].nome[0]==letra){
            cont++;
        }
    }
    return cont;
}

float soma_investimentos(char nome[30]){
    float soma=0;
    for (int i=0;i<4;i++){
        if (strcmp(Investimentos[i].nome, nome)==0){
            soma=Investimentos[i].rendimentos[0]+Investimentos[i].rendimentos[1]+Investimentos[i].rendimentos[2];
        }
    }
    if (soma==0){
        return soma=-1;
    }
    else{
        return soma;
    }
}

// exercicio aula 3

void atualizar_bateria(int *bateria,int *consumo){
    *consumo = rand() % 26 + 10;
    *bateria -= *consumo;
    if (*bateria < 0){
        *bateria =0;
    }
}


// int main() {
//     int energia = 40;
//     int bonus = 10;
//     int *p = &energia;
//     int *q = &bonus;
//     *p = *p + *q;
//     q = p;
//     *q = *q - 15;
//     bonus = bonus + 5;
//     printf("energia = %d\n", energia);
//     printf("bonus = %d\n", bonus);
//     return 0;
// }

// p = 40 -> energia 
// q = 10 -> bonus

// p = 50 -> energia
// q = 10 -> bonus

// p = 50 -> energia
// q = 50 -> energia

// p = 35 -> energia
// q = 35 -> energia

// p = 35
// q = 35
// bonus = 15 
