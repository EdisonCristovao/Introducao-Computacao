#include <stdio.h>

//snake case dividir palavras com underscore
// tem uma funçao retorna 1 se num for par caso contrario retorna 0
int verifica_se_par(int num) {
	if (num%2 == 0){
		return 1;
	} else {
		return 0;
	}
}


//Main = inicio
//main da o start da execução
int main() {
	
	int reto = verifica_se_par(5);
	printf("%d\n", reto);
	return 0;
}