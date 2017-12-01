#include <stdio.h>
#include <stdlib.h>

#define LINHA 5
#define COLUNA 6

// foi feito uma matriz com 6 colunas
// a coluna 0 simboliza a matricula
// a coluna 1 simboliza a primeira nota
// a coluna 2 simboliza a segunda nota
// a coluna 3 simboliza a terceira nota
// a coluna 4 simboliza a quarta nota
// a coluna 5 simboliza a media que de inicio recebe 0

//metodo sem retorno que recebe uma matriz por parametro
void media(float matriz[LINHA][COLUNA]) {

	for (int i = 0; i < LINHA; ++i) { //laço que corre as linhas
		for (int j = 1; j < COLUNA-1; ++j) { //laço que corre as colunas
			matriz[i][5] += matriz[i][j]; // somando as notas na quinta coluna
		}
		matriz[i][5] = (matriz[i][5]/4); // divide pela quantidade de notas
		printf("O aluno %.0f tem media %.1f \n", matriz[i][0] , matriz[i][5]);
	}

}		

//esse metodo pega a matricula e as 4 notas
//metodo sem retorno recebe matrz como parametro
void pegar_dados(float matriz[LINHA][COLUNA]) {
	for (int i = 0; i < LINHA; ++i) { // corre a linha
		printf("digite a matricula\n"); // solicita matricula
		scanf("%f" , &matriz[i][0]);    //armazena a matricula
		for (int j = 1; j < COLUNA-1; ++j) { // corre a coluna
			printf("digite a %dª nota\n", j);  // solicita nota 
			scanf("%f" , &matriz[i][j]);		//armazena nota
		}
	}
}

int main() {
	//cria a matriz tipo float
	float matriz[LINHA][COLUNA];
	
	// chama os metodos mandando a matrz como parametro
	pegar_dados(matriz);
	media(matriz);

	// todos os alunos com media <6 estao de recuperação
	// nao foi tratado pra media <3 onde a reprovaçao é direta
	printf("\nImprimindo alunos de recuperação!\n");
	for (int i = 0; i < LINHA; ++i) 
		if (matriz[i][5]<6) 
			printf("O aluno %.0f tem media %.1f e esta de recuperação\n", matriz[i][0] , matriz[i][5]);

	printf("FIM DA EXECUÇAO\n");
	return 0;
}
