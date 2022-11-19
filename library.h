#ifndef LIBRARY_H
#define LIBRARY_H

/* Includes:
=================================================================================================== */
	#include <stdio.h>
	#include <stdlib.h>
	
/* Prototypes:
=================================================================================================== */
	void menu(void);
	void switchCode(int choice);
	void buildArray(void);
	void buildGraph(void);

/* Structures:
=================================================================================================== */
	typedef struct dado {
		int hash;  // Primeiro elemento do par, que também esta na tabela.
		int peso;  // Peso da arestas que liga os dois elementos do par.	
		int v;     // Segundo elemento do par.
	} Dado;

#endif //LIBRARY_H
