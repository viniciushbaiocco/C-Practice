#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void exercicio1(void){
    float numeros[10];
    int i, contneg = 0;
    float somapos = 0;
    for (i=0;i<10;i++){
        scanf("%f", &numeros[i]);
        if (numeros[i] < 0){
            contneg++;
        }
        else if (numeros[i]==0) {
            continue;
        }
        else {
            somapos+=numeros[i];
        }
    }
    printf("negativos: %d\n", contneg);
    printf("soma dos positivos: %f", somapos);
}

void exercicio2(void){
    int numeros[15],posicoes[15],cont2 = 0;
    for (int i=0;i<15;i++){
        scanf("%d",&numeros[i]);
    }
    for (int i=0;i<15;i++){
        if (numeros[i] == 2){
            posicoes[cont2] = i;
            cont2++;
        }
    }
    for (int i=0;i<cont2;i++){
        printf("%d\n", posicoes[i]);
    }
}

void exercicio3(void){
    int numeros[7];
    for (int i=0;i<7;i++){
        scanf("%d", &numeros[i]);
    }
    for (int i=0;i<7;i++){
        if (numeros[i]%2==0){
            printf("multiplos de dois: %d, na posicao %d\n", numeros[i],i);
        }
        if (numeros[i]%3==0){
            printf("multiplos de tres: %d, na posicao %d\n", numeros[i],i);
        }
        if (numeros[i]%2==0 && numeros[i]%3 == 0){
            printf("multiplos de dois e tres ao mesmo tempo: %d, na posicao %d\n", numeros[i],i);
        }
    }
}

void exercicio4(void){
    int vagas[12];
    int i, qtdelivre = 0, qtdeocupada=0;
    for (i=0;i<12;i++){
        scanf("%d", &vagas[i]);
        if (vagas[i] == 0){
            qtdelivre++;
            printf("A posição da vaga livre %d é %d\n", qtdelivre, i);
        }
        else {
            qtdeocupada++;
        }
    }
    printf("vagas livres: %d \n vagas ocupadas: %d", qtdelivre,qtdeocupada);
}

void exercicio6(void){
    int numeros[15], maior,menor,i,posicaomaior = 0,posicaomenor = 0;
    scanf("%d", &numeros[0]);
    maior = numeros[0];
    menor = numeros[0];
    for (i=1;i<15;i++){
        scanf("%d", &numeros[i]);
        if (numeros[i]>maior){
            maior = numeros[i];
            posicaomaior = i;
        }
        if (numeros[i]<menor){
            menor = numeros[i];
            posicaomenor = i;
        }
    }
    printf("maior: %d na posicao %d\n", maior, posicaomaior);
    printf("menor: %d na posicao %d", menor, posicaomenor);
}

void exercicio7(void){
    float chuva[10], media=0;
    int i;
    for (i=0;i<10;i++){
        scanf("%f", &chuva[i]);
        media+=chuva[i];
    }
    media /= 10;
    for (i=0;i<10;i++){
        if (chuva[i]>media){
            printf("O valor %f na posição %d esta acima da media\n", chuva[i], i);
        }
    }
}

void exercicio9(void){
    int a[5], b[5],i,variavel = 0;
    for (i=0;i<5;i++){
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    for (i=0;i<5;i++){
        variavel += b[4-i] - a[i];
    }
    printf("O valor final da operação é %d", variavel);
}

void exercicio10(void){
    char string[50];
    int tem_a = 0;
    fgets(string,sizeof(string),stdin);
    int tamanho = strlen(string);
    for (int i=0;i<tamanho;i++){
        if (string[i]=='a' || string[i]=='A'){
            tem_a=1;
            break;
        }
    }
    if (tem_a){
        printf("tem a");
    }
    else{
        printf("nao tem a");
    }
}

void exercicio11(void){
    char nome1[50];
    char nome2[50];
    int i;
    fgets(nome1,sizeof(nome1),stdin);
    fgets(nome2,sizeof(nome2),stdin);
    int tamanho1 = strlen(nome1);
    int tamanho2 = strlen(nome2);
    for (i=0;i<tamanho1;i++){
        nome1[i] = toupper(nome1[i]);
    }
    for (i=0;i<tamanho2;i++){
        nome2[i] = toupper(nome2[i]);
    }
    int tem = strcmp(nome1,nome2);
    if (tem==0){
        printf("as duas strings são iguais");
    }
    else{
        printf("as duas strings não são iguais");
    }
}

void exercicio12(void){
    char frase[50];
    int vogais = 0, espacos = 0;
    fgets(frase,sizeof(frase),stdin);
    int tamanho = strlen(frase) - 1;
    for (int i=0;i<tamanho;i++){
        frase[i] = tolower(frase[i]);
    }
    for (int i=0;i<tamanho;i++){
        if (frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u'){
            vogais++;
        }
        if (frase[i]== ' '){
            espacos++;
        }
    }
    printf("vogais: %d\n", vogais);
    printf("espacos: %d", espacos);
}

void exercicio13(void){
    
}