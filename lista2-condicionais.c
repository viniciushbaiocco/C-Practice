#include <math.h>
#include <stdio.h>
void exercicio1(void) {
  float salario, bonus, salariofinal;
  scanf("%f", &salario);
  if (salario <= 2000) {
    bonus = salario * 0.20;
  } else if (salario >= 2000 && salario <= 5000) {
    bonus = salario * 0.10;
  } else {
    bonus = salario * 0.05;
  }
  salariofinal = salario + bonus;
  printf("Salario final é %f, com bônus de %f.", salariofinal, bonus);
}

void exercicio2(void) {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a < c + b && b < c + a && c < a + b) {
    if (a == b && a == c && b == c) {
      printf("Equilatero");
    } else if (a == c || b == c || a == b) {
      printf("Isósceles");
    } else {
      printf("Escaleno");
    }
  } else {
    printf("Não é um triangulo");
  }
}

void exercicio3(void) {
  int codigo;
  scanf("%d", &codigo);
  if (codigo < 0 || codigo > 12) {
    printf("codigo invalido");
    return;
  }
  if (codigo <= 4) {
    printf("Alimenticio");
  } else if (codigo >= 5 && codigo <= 8) {
    printf("Limpeza");

  } else {
    printf("Eletronico");
  }
}

void exercicio5(void) {
  int categoria;
  float valor, novovalor;
  scanf("%d", &categoria);
  scanf("%f", &valor);
  if (valor < 100) {
    if (categoria == 1) {
      novovalor = valor + valor * 0.05;
    } else if (categoria == 2) {
      novovalor = valor + valor * 0.08;
    } else {
      novovalor = valor + valor * 0.10;
    }
  } else {
    novovalor = valor;
  }
  printf("novo valor: %f", novovalor);
}

void exercicio6(void) {
  int ano;
  scanf("%d", &ano);
  if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
    printf("ano bissexto");
  } else {
    printf("não é bissexto");
  }
}

void exercicio9(void) {
  int opcao, idade;
  scanf("%d", &opcao);
  scanf("%d", &idade);
  switch (opcao) {
  case 1:
    printf("Lanche escolhido: Hamburger");
    break;
  case 2:
    printf("Lanche escolhido: Pizza");
    break;
  case 3:
    printf("Lanche escolhido: Salada");
    break;
  default:
    printf("Opção inválida");
    break;
  }
  (idade < 12 || idade > 60) ? printf("\nCOM DESCONTO")
                             : printf("\nSEM DESCONTO");
}

void exercicio10(void) {
  int tempo, ingressos;
  scanf("%d", &tempo);
  scanf("%d", &ingressos);
  if (tempo < 180 && ingressos > 10) {
    printf("Sessão Autorizada");
  } else {
    printf("Sessão cancelada");
  }
  ingressos >= 100 ? printf("Sessão cheia") : printf("Ainda há vagas");
}

void exercicio11(void) {
  int ingredientes, temperatura;
  scanf("%d", &ingredientes);
  scanf("%d", &temperatura);
  if (ingredientes >= 3 && ingredientes <= 6) {
    printf("Poção preparada");
  } else {
    printf("poção falhou");
  }
  temperatura < 80 ? printf("\ntemperatura segura")
                   : printf("\ncuidado com a temperatura");
}

void exercicio12(void) {
  int casa, pontos;
  scanf("%d", &casa);
  switch (casa) {
  case 1:
    printf("GRIFINORIA");
    break;
  case 2:
    printf("SONSERINA");
    break;
  case 3:
    printf("LUFA-LUFA");
    break;
  case 4:
    printf("CORVINAL");
    break;
  default:
    printf("CASA NAO EXISTENTE");
    break;
  }
  scanf("%d", &pontos);
  pontos > 50 ? printf("DESTAQUE DA CASA") : printf("ALUNO REGULAR");
}

void exercicio13(void) {
  double E, D, L, P, PCR, I;
  scanf("%lf", &E);
  scanf("%lf", &D);
  scanf("%lf", &L);
  scanf("%lf", &P);
  double pi = 3.14159;
  I = pi * pow(D, 4) / 64;
  PCR = (pow(pi, 2) * E * I) / pow(L, 2);
  P < PCR ? printf("ESTAVEL") : printf("RISCO DE INSTABILIDADE");
}

int main() { exercicio12(); }