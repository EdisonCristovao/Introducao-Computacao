#include <stdio.h>

		// PARAMETROS são definidos dentro dos parentes ( AQUI )
int soma(int j, int k) {
	 int batatinha = j+k;
	 return batatinha;
}

//Main = inicio
//main da o start da execução
int main() {
	//4+5+6
	//quando chamar precisa-se passar os parametros
	int result = soma(4,5);
	int result2 = soma(6,result);
	printf("%d\n", result2);

	return 0;
}