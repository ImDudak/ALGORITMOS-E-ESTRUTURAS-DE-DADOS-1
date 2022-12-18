#ifndef ABC_H_INCLUDED
#define ABC_H_INCLUDED

typedef struct sNodo Nodo;

typedef struct sListaSimplesEnc ListaSimplesEnc;

void criarLista(ListaSimplesEnc *pList);

void mostrarLista(ListaSimplesEnc *pList);

void inserirIni(ListaSimplesEnc *pList, int v);

void inserirOrd(ListaSimplesEnc *pList, int v);

void removerEle(ListaSimplesEnc *pList, int v);

void removerIni(ListaSimplesEnc *pList);

void removerTudo(ListaSimplesEnc *pList);

void alterarEle(ListaSimplesEnc *pList, int v1, int v2);

int estaVazia(ListaSimplesEnc *pList);

#endif // ABC_H_INCLUDED
