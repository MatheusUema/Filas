#ifndef LISTAS_H
#define LISTAS_H

#define TAM 100

typedef struct fila_estatica FILA_ESTATICA;


struct fila_estatica {
	double vetor[TAM];
	int inicio;
	int fim;

};

FILA_ESTATICA *criar_fila();

int enfileirar(FILA_ESTATICA *fila,double  x);

double desenfileirar(FILA_ESTATICA *fila);

double frente(FILA_ESTATICA *fila);

int tamanho(FILA_ESTATICA *fila);

void vazia(FILA_ESTATICA *fila);

void cheia(FILA_ESTATICA *fila);

#endif
