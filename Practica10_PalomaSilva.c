/* 	Práctica#10                             Silva Rodríguez Paloma Mariel
	Fecha de entrega: 9 de Diciembre de 2020*/
//						Depuración de programas

/*1.- Para el siguiente código fuente, utilizar algún entorno de depuración
para encontrar la utilidad del programa y la funcionalidad de los principales
comandos de depuración, como puntos de ruptura, ejecución de siguiente línea 
o instrucción*/

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//No hay variables globales

//Declaración de función principal
void main(){ 

	//Declaración de variables locales
	//Uso de variables: Saber cuántas veces se hará el ciclo y calcular la sumatoria
	 int N, CONT, AS; 

	 //Bloque de instrucciones 
	 //En este bloque se calculará la sumatoria de números impares hasta llegar a la cantidad dada
	 AS=0; 
	 CONT=1; 
	 printf("TECLEA UN NUMERO: "); 
	 scanf("%i",&N); 
	 while(CONT<=N){ 
		 AS=(AS+CONT); 
		 CONT=(CONT+2); 
 	} 
 printf("\nEL RESULTADO ES %i\n", AS); 
} 
/*Una vez depurado el programa, pude llegar a la conclusión siguiente: 
El programa es una sumatoria de los números impares mientras el contador aumenta y 
llega al número dado por el usuario*/








/*2.- El siguiente programa debe mostrar las tablas de multiplicar desde
la del 1 hasta la del 10.  En un principio no se mostraba la tabla del 
10, luego después de intentar corregirse sin un depurador dejaron de 
mostrarse el resto de las tablas. Usar un depurador de C para  averiguar 
el funcionamiento del programa y corregir ambos problemas. */

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//No hay variables globales

//Declaración de función principal
#include <stdio.h> 
void main(){ 

	//Declaración de variables locales
	//Uso de variables para generar las tablas de multiplicar

	int i, j; 

	//Bloque de instrucciones
	//En ese bloque se generarán las tablas de multiplicar y se mostrarán en pantalla

	for(i=1; i<=10; i++){ 
		printf("\nTabla del %i\n", i); 
		for(j=1; j<=10; j++){ 
			printf("%i X %i = %i\n", i, j, i*j); 
		} 
	} 
} 
/*Una vez depurado el programa, pude ver que las fallas estaban en las condiciones
planteadas en los ciclos "for"; en el de "i" le faltaba el símbolo "=" y en el de
"j", en vez de "==" debe ser "<=" por eso los valores de j diferentes de 10 no 
cumplían con la condición y por lo tanto no se ejecutaba*/









/*3.- El siguiente programa muestra una violación de segmento durante su 
ejecución y se interrumpe; usar un depurador para detectar y corregir la 
falla. */

//Declaración de librerías
#include<stdio.h>
#include <math.h> 

//Declaración de variables globales
//No hay variables globales

//Declaración de función 
void main(){

	//Declaración de variables
	//Uso de las variables: Calcular el término genérico de la serie

	int K, X, AP, N; 
	float AS; 

	//Bloque de instrucciones
	//Se ingresarán los valos de N y X para encontrar el término genérico

	printf("EL TERMINO GENERICO DE LA SERIE ES: X^K/K!"); 
	printf("\nN="); 
	scanf("%d",&N); 
	printf("X="); 
	scanf("%d",&X); 
	K=0; 
	AP=1; 
	AS=0; 
	while(K<=N){ 
		AS=AS+pow(X,K)/AP; 
		K=K+1; 
		AP=AP*K; 
	} 
	printf("SUM= %le",AS); 
}
/*Una vez depurado el programa localicé la falla en los "scanf", faltaba el 
símbolo "&" para poder almacenar el valor en la variables "N" y "X"*/ 
