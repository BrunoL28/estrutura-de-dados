#ifndef MAT_H
#define MAT_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "msgassert.h"

#define MAXTAM 5

typedef struct mat{
	double m[MAXTAM][MAXTAM];
	int tamx, tamy;
	int id;
} mat_tipo;

// limite superior da inicializacao aleatoria
#define INITRANDOMRANGE 10
// Macro que realiza swap sem variavel auxiliar
#define ELEMSWAP(x,y) (x+=y,y=x-y,x-=y)

void destroiMatriz(mat_tipo *a);
void transpoeMatriz(mat_tipo *a);
void multiplicaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c);
void somaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c);
void copiaMatriz(mat_tipo *src, mat_tipo * dst, int dst_id);
double leElemento (mat_tipo * mat, int x, int y);
void escreveElemento(mat_tipo * mat, int x, int y, double v);
void salvaMatriz(mat_tipo * mat, FILE * out);
void imprimeMatriz(mat_tipo * mat);
double acessaMatriz(mat_tipo * mat);
void inicializaMatrizAleatoria(mat_tipo * mat);
void inicializaMatrizNula(mat_tipo * mat);
void criaMatriz(mat_tipo * mat, int tx, int ty, int id);


#endif
