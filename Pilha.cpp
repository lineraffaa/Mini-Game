#include <iostream>

using namespace std; 

struct no {
	string info;
	no *link;
};

no *inicializaPilha(no *L) {
	return NULL;
}

void imprimePilha(no *L) {
	no *P;
	P = L;	
	
	cout <<"Imprime PILHA:" << endl;	
	while(P != NULL) {
		cout << P->info << " ";	
		P = P->link;
	}	
}

no *PUSH(no *L, string x) {
	no *N;

	N = new no;
	N->info = x;

    N->link = L;
	
	L = N;
	return (L);
}

 void  POP(no *&L, string *n) {
	no *AUX;
	if (L != NULL) {
		*n = L->info;
		AUX = L;
		L = L->link;
		delete AUX;
	}
	else{
		*n = "";
	}
}

