/* Includes:
=================================================================================================== */
	#include "library.h"
	
/* Global Variables:
=================================================================================================== */
	Dado array[1];
	int numV = 0;
	int graph[1][1];
	
/* Main Menu:
=================================================================================================== */
	void menu(void) {
		int choice;
		
		do{
			printf("\n\n\t============================================\n\n");
	        printf("\t\tMain Menu - Algoritmo de Prim\n\n");
	        printf("\t============================================\n\n");
	        printf("\t%c ESCOLHA A OPCAO DESEJADA:  \n\n", 26);
	        printf("\t  1  %c   Inserir Grafo \n\n", 16);
	        printf("\t  2  %c   Gerar Arvore(s) do Tipo MST\n\n", 16);
	        printf("\t  3  %c   Sobre o Algoritmo\n\n", 16);
	        printf("\t  4  %c   Sair\n", 16);
	        printf("\t____________________________________________   \n\n\t  %c     ", 26);
	        
	    	scanf("\n%d", &choice);
	    	
	    	printf("\t____________________________________________   \n\n");
        
        	switchCode(choice);
        	
		} while (choice != 4);
		
		
	}

/* Switch:
=================================================================================================== */
	void switchCode(int choice) {
		switch(choice) {
			case 1:
				/* Armazenando Vertice Num Array Unidimensional:
				=================================================================================== */
					buildArray();
					
				/* Obtendo Arestas e Seus Pesos (Construindo Grafo):
				=================================================================================== */
					buildGraph();
					
				break;
				
			case 2:
				// Iremos utilizar Hash para buscar a(s) arvores geradoras de custo minimo:
				printf("\top2");
				
				/* Checando se os vertices ja foram inseridos:
				=================================================================================== */
					if (numV == 0) {
						printf("\t Necessario que seja inseridos os vertices, primeiramente! Volte a opcao 1.");
						break;
					}
				
				break;
				
			case 3:
				printf("\t O algoritmo consiste numa solucao para \n\t encontrar um arvore geradora de custo \n\t minimo de um grafo nao-dirigido \n\t com custos nas arestas.");
				printf("\n\n");
				printf("\t Os custos das arestas sao dados por \n\t numeros inteiros arbitrarios.");
				printf("\n\n");
				printf("\t O algoritmo apresenta solucao apenas \n\t para grafos conexos.");
				
				break;
				
			case 4:	
				printf("\t Construido por:\n");
				printf("\t Arthur Antunes\n");
				printf("\t Guilherme Henrique\n");
				printf("\t Karen Moreira\n\n");
				
				
				printf("\t Programa Finalizado! Bye-bye :)\n");
				break;
				
			default:
				printf("\t\n Escolha uma opcao valida!\n");
				
				break;
		}
	}
	
/* Case 1:
=================================================================================================== */
	/* Pegando Array:
	=============================================================================================== */
		void buildArray(void) {
			/* Variaveis:
			======================================================================================= */
				int i;
			
			/* Pegando o Numero de Vertices:
			======================================================================================= */
				printf("\t Insira o numero de elementos: ");
				scanf("%i", &numV);
				
			/* Instanciando o Array:
			======================================================================================= */
				array[numV];
				
			/* Colocando os elementos no array (Começando de 1):
			======================================================================================= */
				for(i=1; i<=numV; i++) {
					array->hash = i;
				}
				
			/* Feedback no Terminal:
			======================================================================================= */
				printf("\t Vertices armazenados com sucesso");
		}
	
	/* Construindo Grafo:
	=============================================================================================== */
		void buildGraph(void) {
			int i;
			
			/* Armazenar o numero de arestas para cada vertice do grafo:
			======================================================================================= */
				
		}

/* Case 2:
=================================================================================================== */
