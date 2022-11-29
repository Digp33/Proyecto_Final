#define G 3
#define N 10

int funTriangulo(int x);
int funCuadrilateros(int x);
int funConversion(int x);
int funFactorial(int x) ;
void leer_matriz(int datoUno[N][N], int F, int C);
void imprimir_matriz(int datoUno[N][N],int F,int C);
void multiplicar(int datoUno[N][N],int datoDos[N][N],int resultadoM[N][N],int f1,int cf,int c2);
void suma_matriz(int datoUno[N][N],int datoDos[N][N],int matrizResultado[N][N],int F);
void transpuesta(int datoUnoT[G][G],int datoDosT[G][G],int espacio);
void leer_matrizTrans(int datoUnoT[G][G], int F, int C);
void imprimir_matrizTrans(int datoUnoT[G][G],int F,int C);
int funSumaMatriz(int x);
int funMultiMatriz(int x);
int funTransMatriz(int x);
int funSalario(int x);
