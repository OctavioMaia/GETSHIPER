typedef struct nodoCompras{
	char clientes[10];
	char produtos[10];
	char tipo_compra;
	int mes;
	float lucro;
	int quantidade;
	struct nodoCompras* esq;
	struct nodoCompras* dir;
	int altura;
}*AVLCompras;

AVLCompras inserirCompras(char s[], AVLCompras t);
void imprimirCompras(AVLCompras t);
float getTotal(AVLCompras avl[],char codigo[], int m);
float getTotalN(AVLCompras avl,char codigo[], int m);
float getTotalP(AVLCompras avl,char codigo[], int m);