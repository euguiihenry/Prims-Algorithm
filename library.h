#ifndef LIBRARY_H
#define LIBRARY_H

/* Includes:
=================================================================================================== */
	#include <stdio.h>
	#include <stdlib.h>

/* Structures:
=================================================================================================== */
	typedef struct Destino {
		int verticeDest;
		int peso;
	} Destino;
	
	typedef struct Hash {
		int index;
		Destino *destino;
	} Hash;
	
/* Prototypes:
=================================================================================================== */
	void menu(void);
	void switchCode(int choice);
	void buildArray(void);
	void insertVertex(Hash *tabela, int vertexValue);
	void buildGraph(int numV);
	void insertEdge(Hash *tabela, int i, int vertice, int peso);



#endif //LIBRARY_H
