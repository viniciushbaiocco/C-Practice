#include <math.h>
#include <stdio.h>

void exercicio1(void) {
  float valor = 0, valortotal = 0;
  int cont = 0, qtde500 = 0;
  while (cont <= 19) {
    scanf("%f", &valor);
    valortotal += valor;
    if (valor >= 500) {
      qtde500++;
    }
    cont++;
  }
  printf("Valor total das vendas foi de %.2f, e qtde de vendas acima de 500 foi %d", valortotal, qtde500);
}

void exercicio2(void) {
  int idade = 0, cont = 0, idade18e30 = 0, cont50 = 0, somaidades = 0;
  float mediaidades;
  while (cont <= 24) {
    scanf("%d", &idade);
    if (idade > 18 && idade < 30) {
      idade18e30++;
    }
    if (idade > 50) {
      cont50++;
    }
    somaidades += idade;
    cont++;
  }
  mediaidades = somaidades / 25.0;
  printf("Entre 18 e 30 anos: %d\n", idade18e30);
  printf("Maiores de 50 anos: %d\n", cont50);
  printf("Média de idade: %.2f\n", mediaidades);
}

void exercicio03(void) {
  float peso, maior, menor;
  int cont = 1, maior90 = 0;
  scanf("%f", &peso);
  maior = peso;
  menor = peso;
  if (peso > 90) {
    maior90++;
  }
  do {
    scanf("%f", &peso);
    if (peso > maior) {
      maior = peso;
    }
    if (peso < menor) {
      menor = peso;
    }
    if (peso > 90) {
      maior90++;
    }
    cont++;
  } while (cont < 14);
  printf("maior peso: %.2f\n", maior);
  printf("menor peso: %.2f\n", menor);
  printf("acima de 90 kilos: %d", maior90);
}

void exercicio04(void) {
  float temperatura, mediaanual = 0.0, menortemperatura;
  int cont = 1;
  scanf("%f", &temperatura);
  menortemperatura = temperatura;
  mediaanual += temperatura;
  while (cont < 15) {
    scanf("%f", &temperatura);
    if (temperatura < menortemperatura) {
      menortemperatura = temperatura;
    }
    cont++;
    mediaanual += temperatura;
  }
  mediaanual /= 15;
  printf("media anual: %.2f\n", mediaanual);
  printf("menor temperatura: %.2f", menortemperatura);
}

void exercicio05(void) {
  int numero, cont = 0;
  float media = 0, menorn;
  scanf("%d", &numero);
  media += numero;
  menorn = numero;
  while (numero != 0) {
    scanf("%d", &numero);
    media += numero;
    if (numero < menorn && numero != 0) {
      menorn = numero;
    }
    cont++;
  }
  if (cont > 0) {
    media /= cont;
  }
  printf("media: %.2f\n", media);
  printf("menor numero: %.2f", menorn);
}

void exercicio06(void) {
  int numero, somapares = 0, somaimpares = 0, cont3090 = 0;
  int i;
  for (i = 0; i < 10; i++) {
    scanf("%d", &numero);
    if (numero % 2 == 0) {
      somapares += numero;
    } else {
      somaimpares += numero;
    }
    if (numero >= 30 && numero <= 90) {
      cont3090++;
    }
  }
  printf("soma dos pares: %d\n", somapares);
  printf("soma dos impares: %d\n", somaimpares);
  printf("entre 30 e 90: %d", cont3090);
}

void exercicio07(void) {
  float altura, mediaalturas = 0;
  int inferior160 = 0,superior170 = 0;
  int i;
  for (i=0; i<8; i++){
    scanf("%f",&altura);
    mediaalturas += altura;
    if (altura>1.70){
      superior170++;
    }
    if (altura<1.60){
      inferior160++;
    }
  }
  mediaalturas /=8;
  printf("media das alturas: %.2f\n", mediaalturas);
  printf("acima de 1.70: %d\n", superior170);
  printf("abaixo de 1.60: %d", inferior160);
}

void exercicio08(void){
  float investimento, totalinvestimento = 0;
  int cont = 0;
  while (totalinvestimento < 10000){
    scanf("%f", &investimento);
    totalinvestimento+= investimento;
    cont++;
  }
  printf("meses: %d\n", cont);
  printf("total investido: %.2f", totalinvestimento);
}

void exercicio09(void){
  float nota, medianotas = 0;
  int episodios8 = 0, cont = 0, i;
  for (i = 0; i<10; i++){
    scanf("%f", &nota);
    if (nota<0 || nota>10){
      printf("nota invalida");
      break;}
    medianotas += nota;
    cont++;
    if (nota>8){
      episodios8++;
    }
  }
  if (cont > 0){
    medianotas /= cont;
  }
  printf("media das notas: %.2f\n", medianotas);
  printf("episodios acima de 8: %d", episodios8);
}

void exercicio10(void){
  int i;
  for (i = 500; i<=1500; i++){
    if (i % 9 == 4){
      printf("%d \n", i);
    }
  }
}

void exercicio11(void){
  float emcima = 1.0;
  int n, embaixo;
  float resultado = 0.0;
  scanf("%d", &n);
  for (embaixo = 1; embaixo <= n; embaixo++){
    resultado += emcima/embaixo;
  }
  printf("resultado: %f", resultado);
}

void exercicio12(void){
  float t=1, h;
  int calculando = 1;
  while(calculando){
    h = 40*t - 5*pow(t, 2);
    if (h <= 0 && t>0){
      calculando = 0;
    }
    else {
      t++;
    }
  }
  printf("o projetil volta ao chao em %.0f segundos", t);
}

void exercicio13(void){
  int a=0,b=0,c=0,d=0,tempo,i,total;
  float percentualA_D;
  for (i=0;i<15;i++){
    scanf("%d",&tempo);
    if (tempo<=90){
      a++;
    }
    else if (tempo<=120) {
      b++;
    }
    else if (tempo<=150) {
      c++;
    }
    else {
      d++;
    }
  }
  total = a+b+c+d;
  percentualA_D = (a+d)*100.0/total;
  printf("%d \n %d \n %d \n %d\n", a,b,c,d);
  printf("percentual A e D: %.2f", percentualA_D);
}

void exercicio14(void){
  int numero,dobro;
  scanf("%d", &numero);
  while (numero>=0){
    dobro = numero*2;
    printf("dobro do numero : %d é %d\n", numero,dobro);
    scanf("%d", &numero);
  }
}

void exercicio15(void){
  float bacterias = 500;
  int horas = 0;
  while (bacterias<=5000){
    bacterias *= 1.20;
    horas++;
  }
  printf("Horas: %d\n", horas);
  printf("População: %.2f", bacterias);
}

int main() { exercicio1(); }