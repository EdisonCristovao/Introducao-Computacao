#include <stdio.h>


//metodo ou funcao com retorno inteiro
int soma(int ini, int fim) {
	int resul = 0;			// valor inicial para variavel resul
	for(int i=ini; i<=fim; i++) {
		resul = resul + i; // soma o antigo valor com o atual 
	}		
	return resul;				// retorna a soma final
}					

//Main = inicio
//main da o start da execução
int main() {

	int resul = soma(20, 100);
	printf("%d\n", resul); // mostra na tela o resul que foi recebido por retorno
	return 0;
}