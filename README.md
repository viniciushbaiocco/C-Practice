# C-Practice

Exercícios de C da faculdade. Cada arquivo reúne os exercícios de uma aula ou de
uma lista, um por função.

- `aula1-entrada-saida-operadores.c` — scanf, printf, operadores aritméticos
- `aula2-condicionais.c` — if/else, switch
- `aula3-condicionais-lacos-matrizes.c` — condicionais, laços, vetores e matrizes
- `lista1-operadores-aritmeticos.c` — expressões aritméticas e math.h
- `lista2-condicionais.c` — if aninhado, switch, operador ternário
- `lista3-lacos-repeticao.c` — while, do-while, for
- `lista4-vetores-strings.c` — vetores e strings
- `lista5-funcoes.c` — funções com parâmetro e retorno
- `lista6-structs.c` — structs, vetores e matrizes como parâmetro, ponteiros

## Compilando

```
gcc lista3-lacos-repeticao.c -lm -o programa
./programa
```

O `-lm` é necessário nos arquivos que usam `math.h`.

Nem todos têm `main`: aula1, lista1, lista4, lista5 e lista6 são só as funções
dos exercícios. Para rodar um deles, escreva um `main` chamando a função que
quiser. Na lista5 e na lista6 as `main` de cada exercício estão comentadas no
próprio arquivo.
