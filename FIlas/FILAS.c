//FILA

#include <stdio.h>
#include <stdlib.h>

#include "filas.h"

FILA_ESTATICA *criar_fila(){
	FILA_ESTATICA *fila = (FILA_ESTATICA*)malloc(sizeof(FILA_ESTATICA));

	if(fila != NULL) {
		fila->fim = 0;
		fila->inicio = 0;
	}

	return fila;

}

int enfileirar(FILA_ESTATICA *fila,double  x) {

	if(fila != NULL) {
		fila->vetor[fila->fim] = x;
		fila->fim++;
		return 1;

	}
	else return 0;
}

double desenfileirar(FILA_ESTATICA *fila) {
	double aux;

	if(fila != NULL) {
		if (fila->vetor[fila->inicio != 0]){
			aux = fila->vetor[fila->inicio];
			for(int i = 0; i < fila->fim; i++){
				fila->vetor[i] = fila->vetor[i+1];

			}
			fila->fim--;
			return aux;
			}
	}
	else return 0;
}

double frente(FILA_ESTATICA *fila) {

	if(fila != NULL){
		double aux;
		aux = (fila->vetor[fila->inicio]);
		return aux;
	}
	else return 0;
}

int tamanho(FILA_ESTATICA *fila) {

	if(fila != NULL){
		return fila->fim;
	}
}

void vazia(FILA_ESTATICA *fila) {

	if (fila != NULL){
		if(fila->inicio != fila->fim){
			printf("A fila nao esta vazia. \n");
		}
	}
	else{
		printf(" A fila esta vazia. \n");
	}
}

void cheia(FILA_ESTATICA *fila) {

	//printf(" %d %d", fila->fim, TAM);

	if (fila != NULL){
		//printf(" batata");
		if(fila->fim == TAM){
			printf("A fila esta cheia \n");
		}
		else{
		printf("A fila nao esta cheia \n");
		}

	}
	else{
		printf("A fila nao esta cheia \n");
	}
}
