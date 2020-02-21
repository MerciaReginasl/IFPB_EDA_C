/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Questão 4: Código reescrito e corrigido!
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct { 
	int idade;
	char nome[50]; 
	int *notas;
	
} aluno; //define o nome apenas no final

int main() {
	aluno a1, a2;
	a1.idade = 10;
	strcpy(a1.nome, "Pedro"); 
	a2.idade = 12;
	strcpy(a2.nome, "Maria"); 
	
	//Declarando o tamanho do espaço de memória do aluno a1 e a2:
	a1.notas = (int*)malloc(5*sizeof(int));
	a2.notas = (int*)malloc(4*sizeof(int));
	
	int i;
	for(i=0; i<4; i++){ //Condição i
		a2.notas[i] = 100;
	}
	
	for(i=0; i<5; i++){ //condição ii
		if(i<3){
		  a1.notas[i] = a2.notas[i]; 
		}	
	
		a1.notas[4] = 100;	//array das notas
	}
	double media = 0; //declarando a média 
	for(i=0; i<5; i++){
		media += a1.notas[i]; //contagem
	
	}
	
	media = media / 5; //divide a média anterior por 5.
	printf("Media de %s: %lf\n", a1.nome, media);
	
	media = 0; //condição para o a2
	for(i=0; i<4; i++){
		media += a2.notas[i];
	}
	
	media = media / 4;
	printf("Media de %s: %lf\n", a2.nome, media);
	
	free(a1.notas); //desalocando notas a1
	free(a2.notas); //desalocando notas a2
	
	return 0;
	
}
