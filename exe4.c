#include <stdio.h>

//snake case dividir palavras com underscore
void converte_segundos(int seg) {
	// descobre a hora
	int hora = seg / 3600;
	int rest = seg % 3600;

	// descobre os minutos
	int min = rest / 60;

	// pega os segundos finais
	rest = rest % 60;

	// mostra na tela
	printf("%d Hora \n", hora);
	printf("%d Minutos \n", min);
	printf("Sobrou %d Segundos \n", rest);
	printf("\n");
}

//Main = inicio
//main da o start da execução
int main() {

	converte_segundos(10000);

	converte_segundos(40);

	converte_segundos(400005021);

	converte_segundos(400);
}