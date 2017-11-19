#include <stdio.h>
#include <stdlib.h>

#include "filas.h"

void main(){

	FILA_ESTATICA *fila = criar_fila();

	double valor = 123.11;
	double valor2, valor3,valor4;
	valor2 = 123.12;
	valor3 = 123.32;
	valor4 = 123.45;
	enfileirar(fila, valor);


	enfileirar(fila, valor2);
	enfileirar(fila, valor3);
	enfileirar(fila, valor4);

	printf(" %lf \n", frente(fila));
	printf(" %d \n", tamanho(fila));

	vazia(fila);

	cheia(fila);


}
