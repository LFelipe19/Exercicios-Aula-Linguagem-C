#include <stdio.h>
int fibo(int n);
int main() {
    int teto;
    printf("Qual seq de fibonnaci quer saber: \n");
    scanf("%d", &teto);
    printf("Resultado: %d\n", fibo(teto));
    return 0;
}
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}


#include <stdio.h>
int somaDiv3(int n);
int main() {
    int valor;
    printf("Digite um teto: \n");
    scanf("%d", &valor);
    printf("Somatoria dos divisiveis por 3 na faixa: %d \n", somaDiv3(valor));
    return 0;
}
int somaDiv3(int n){
    if (n==1) return 0;
    if(n % 3 == 0) {
        return n + somaDiv3(n - 1);
    }else {
        return somaDiv3(n-1);
    }
}


#include <stdio.h>
void up(int n);
int main() {
    up(30);
    return 0;
}
void up(int n){
    if(n <=0) return;
    up(n - 1);


#include <stdio.h>
#include "funcoesVet.h"

int main() {
    int jogo[6];
    printf("Palpites para megasena\n");
    alimentar(jogo, 6);
    imprimir(jogo, 6);
    ordenar(jogo, 6);
    imprimir(jogo, 6);
    return 0;
}

/**
 * Biblioteca personalizada para trabalho com vetores
 * nome: funcoesVet.h
 */

/**
 *
 * @param v Vetor de origem
 * @param t Tamanho do vetor passado
 * Função para alimentar com dados do usuario
 */
void alimentar(int v[], int t);

/**
 *
 * @param v Vetor de origem
 * @param t Tamanho do vetor passado
 * Função para ordenar os dados do vetor em ordem
 * crescente
 */
void ordenar(int v[], int t);

/**
 *
 * @param v  Vetor de origem
 * @param t  Tamanho do vetor passado
 * Função para imprimir os dados do vetor
 */
void imprimir(int v[], int t);

/**
 *
 * @param a Valor inicial
 * @param b Valor final
 * Função que troca os valores de posicao
 */
void troca(int *a, int *b);

#include "funcoesVet.h"
#include <stdio.h>
void alimentar(int v[], int t){
    for (int i = 0; i < t; ++i) {
        printf("Digite o %d. palpite: \n", i+1);
        scanf("%d", &v[i]);
    }
}

void ordenar(int v[], int t){
    for (int i = 0; i < t; ++i) {
        for (int j = i; j < t; ++j) {
            if( v[i] > v[j]){
               troca(&v[i], &v[j]);
            }
        }
    }
}
void imprimir(int v[], int t){
    for (int i = 0; i < t; ++i) {
        printf("[%3d] ", v[i]);
    }
    printf("\n");
}

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}



#include <stdio.h>

int fat(int n);

int main() {
    int valor;
    printf("Digite o valor para o fatorial: \n");
    scanf("%d", &valor);
    printf("Fatorial de %d: %d \n",valor,  fat(valor));
    return 0;
}
/**
 *
 * @param n
 * @return Recebe um n e devolve o resultado do fatorial
 */
int fat(int n){
    int m = 1;
    for (int i = 1; i <= n; ++i) {
        m *= i;
    }
    return m;
}



#include <stdio.h>

int fat(int n);

int main() {
    int valor;
    printf("Digite o valor para o fatorial: \n");
    scanf("%d", &valor);
    printf("Fatorial de %d: %d \n",valor,  fat(valor));
    return 0;
}
/**
 *
 * @param n
 * @return Recebe um n e devolve o resultado do fatorial
 * modo recurisvo
 */
int fat(int n){
    if(n == 1) return 1;
    return n * fat(n - 1);
}


#include <stdio.h>
void troca(int *a, int *b);
int main() {
    int a = 10;
    int b = 20;
    troca(&a, &b);
    printf("a> %d, b> %d \n", a, b);
    return 0;
}
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}





    printf("%d ", n);
}