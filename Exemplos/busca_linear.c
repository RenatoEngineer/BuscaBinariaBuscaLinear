/*
 * busca_linear.c
 *
 *  Criado em: 23 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/BuscaBinariaBuscaLinear
 *
 * .:: Busca Linear ::.
 *
 * Tambem chamada de Busca Sequencial eh utilizada para fazer busca de elementos em vetores
 * ordenados elemento a elemento, de modo que a funcao do tempo em relacao ao numero de
 * elementos eh linear, ou seja, cresce proporcionalmente.
 */

#include <stdio.h>

int busca_linear(int vetor[], int chave, int tam){

	for(int i = 0; i < tam; i++){
		if(vetor[i] == chave){
			return i;
		}
	}
	return -1;
}

int main(){

	//Vetor Ordenado
	int vetor[6] = {1, 3, 5, 8, 12, 42};

	//Elemento chave que queremos encontrar no vetor
	int chave = 12;

	//Aplicando a busca linear
	//vetor, chave, tam
	int ret = busca_linear(vetor, chave, 6);

	printf("O Elemento %d esta na posicao: %d", chave, ret);

	return 0;
}
