#include <stdio.h>

		// PARAMETROS são definidos dentro dos parentes ( AQUI )
void soma(int j, int k) {
	printf("%d\n", j+k);
}

//Main = inicio
//main da o start da execução
int main() {
	
	//quando chamar precisa-se passar os parametros
	soma(4,5);
	
	soma(7,5);

	soma(4,3);

	soma(5,5);

	soma(4,100);

	soma(21314,5);
	

	return 0;
}