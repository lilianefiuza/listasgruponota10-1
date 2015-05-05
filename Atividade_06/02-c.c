#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

struct aluno {
	char nome[81];
	int mat;
	char end[121];
	char tel[21];	
	
};

typedef struct aluno *PAluno;

PAluno tab[MAX];

void inicio(int n, PAluno *tab){
	int i;
	for (i=0; i<n; i++)
		tab[i] = NULL;
}

void retira (int n, PAluno *tab, int i){
	if (i<0 || i>=n) {
		printf("Indice fora do limite do vetor\n");
		exit(1); 
	}
	if (tab[i] != NULL){
		free(tab[i]);
		tab[i] = NULL; 
	}
}

void preenche (int n, PAluno *tab, int i){
	int j;
	if (i<0 || i>=n) {
		printf("Indice fora do limite do vetor\n");
		exit(1); 
	}
	if (tab[i]==NULL)
		tab[i] = (PAluno)malloc(sizeof(PAluno));
	scanf("%d", &tab[i]->mat);
	for (j=0;j<81;j++)
		scanf("%c", &tab[i]->nome[j]);
	for (j=0;j<121;j++)
		scanf("%c", &tab[i]->end[j]);
	for (j=0;j<21;j++)
		scanf("%c", &tab[i]->tel[j]);

}

void main(){
	int x, y;
	scanf("%d",&x);
	scanf("%d",&y);
	PAluno tab[x];
	inicio(x,tab);	
	preenche(x,tab,y);
	retira(x,tab,y);

}
