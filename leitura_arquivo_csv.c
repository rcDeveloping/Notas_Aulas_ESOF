#include <stdio.h>

int main (void) {
	
	// Cria uma vari�vel para leitura de dados
	char linha[200];
	// Cria o ponteiro 'arq' do tipo FILE para receber o endere�o de
	// mem�ria de um arquivo
	FILE *arq;
	// Atribui o endere�o de um arquivo em disco ao ponteriro 'arq' e
	// e abre o arquivo no modo leitura
	arq = fopen("baseball.csv", "r");
	// Testa se o arquivo foi lido com sucesso
	// A fun��o fopen() retorna NULL se n�o consegue ler o arquivo
	if (arq == NULL) {
		printf("Erro ao ler arquivo!\n");
		system("pause");
		exit(-1);
	}
	else {
		// Posiciona o cursor no in�cio do arquivo
		rewind (arq);
		// l� cada linha enquanto n�o chegar ao fim do arquivo
		while (!feof (arq)) { // retorna 0 se o fim do arquivo n�o foi alcan�ado
			fgets (linha, sizeof(linha), arq);
			printf("%s", linha);
		}
	}
	// Fecha o arquivo
	fclose(arq);
	return 0;
}
