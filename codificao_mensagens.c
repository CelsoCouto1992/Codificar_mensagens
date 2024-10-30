/*
Programa para codificar mensagens, substituindo vogais por números, sendo que as vogais A,E,I,O,U - correspondam a 2,3,4,5,6
a frase deve possuir no máximo 60 caracteres
*/
#include <string.h>//Biblioteca especifica para funções strings
#include <stdio.h>//Biblioteca de entrada/saida por periféricos padrão
#include <conio.h>//Biblioteca para manipulação de caracteres
#include <stdlib.h>//Biblioteca padrão para uso de funções do sistema
void cabecalho(){
	printf("Agencia BRASILIA\n", 161);
	printf("Menssagem: CONFIDENCIAL - URG \n");
	printf("Oficial: \n\n\n");
}
int main (){//Programa principal
	//Declaração de variáveis
	char frase[100], opcao;
	int cont;
	do
	{
		
		//Chamada do procedimento cabeçalho
		cabecalho();
		//Inicio do programa
		printf("Digite uma frase: ");
		gets(frase);
		for (cont=0; cont<100; cont++)
		{
			if(frase[cont]=='A' || frase[cont]=='a') frase[cont] ='2';
			else if(frase[cont]=='E' || frase[cont]=='e') frase[cont]='3';
				else if(frase[cont]=='I' || frase[cont]=='i') frase[cont]='4';
					else if(frase[cont]=='O' || frase[cont]=='o') frase[cont]='5';
						else if(frase[cont]=='U' || frase[cont]=='u') frase[cont]='6';
		}
		//Resultado:
		printf("\nA frase codificada %c: %c%s%c.", 130,34,frase,34);
		printf("\n\nDeseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		fflush(stdin);//Função para limpar o buffer do teclado
		while(opcao != 's' && opcao != 'S' && opcao !='n' && opcao !='N'){
			
			printf("\n\Erro! Deseja executar novamente (S/N)");
			scanf("%c", &opcao);
			fflush(stdin);
		}
		system("cls");//Limpando a tela
	}while(opcao=='s' || opcao=='S');
}

