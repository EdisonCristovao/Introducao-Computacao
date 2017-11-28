#include <stdio.h>


//metodo ou funcao com retorno inteiro
int soma(int a,int b, int c) {
	int resul = 0;			// valor inicial para variavel resul
	for(int i=b; i<=c; i++) {
		if(i%a == 0) { // verifica se i tem resto 0 quando dividido por a
			resul = resul + i; // soma o antigo valor com o atual 
		}
	}		
	return resul;				// retorna a soma final
}					

//Main = inicio
//main da o start da execução
int main() {

	int resul = soma(2, 20, 100);
	printf("%d\n", resul); // mostra na tela o resul que foi recebido por retorno
	return 0;
}