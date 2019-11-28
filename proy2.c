#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int main (){ 
		const int l=3,m=4,n=2,o=5,p=6,q=7,r=8,s=9;
		int a,b,t1,t2,t3, pol;
		int	t13,t23,t33,t43,pol3,t14,t24,t34,t44,t54,pol4,t15,t25,t35,t45,t55,t65,pol5,t16,t26,t36,t46,t56,t66,t76,pol6,t17,t27,t37,t47,t57,t67,t77,t87,pol7;
		int	t18,t28,t38,t48,t58,t68,t78,t88,t98,pol8,t19,t29,t39,t49,t59,t69,t79,t89,t99,t09,pol9;
		char op = '0';
		char op2 = '0';
		
	
		printf("\tMen%c\n", 163);
		printf("Selecciona una opci%Cn\n", 162);
		printf("1) Desarrollo de un binomio al cuadrado\n");
		printf("2) Desarrollo de binomios a otra potencia\n");
		printf("3) Salir\n");
		scanf("%i", &op);
		
	
		do
		{
		switch (op){
		
			case 1: 
				printf ("\nSe seleccion%c 'Desarrollo de un binomio al cuadrado'", 162);
				printf("\n Un binomio se expresa de la siguiente manera: (a+-b)^n");
				printf("\n La expresi%cn de un polinomio de segundo grado es: a^2+2ab+b^2",162);
		
					printf("\nIngrese el valor de a: "); scanf("%i", &a);
					printf("\nIngrese el valor de b: "); scanf("%i", &b);
					
					//el valor de n es constante durante todo el programa
					
				t1=pow(a,n);
					printf("El primer termino es: %i x^2", t1);
				t2=2*a*b;
					 printf("\nEl segundo termino es: %i x", t2);
				t3=pow(b,n);
					printf("\nEl tercer termino es %i",t3);
				pol= t1,t2,t3;
					printf("\t\nEl resultado del polinomio es %i x^2 + %i x + %i", t1, t2, t3);
			break; 
				
				do
				{
			case 2: 
			printf ("\nSe seleccion%c 'Desarrollo de binomios a otra potencia mayor a 2'\n",162);
			
					printf("2)Triangulo de Pascal\n3)Polinomio 3er grado\n4)Polinomio 4o grado\n5)Polinomio 5o grado\n6)Polinomio 6o grado\n7)Polinomio 7mo grado\n8)Polinomio 8vo grado\n9)Polinomio 9no grado\n10)Volver al menu principal");
					scanf("%d", &op2);
					
				switch (op2){
						case 2:
							printf("Los coeficientes cuando n=0 son: 1				\n");		 
							printf("Los coeficientes cuando n=1 son: 1  1 			\n");
							printf("Los coeficientes cuando n=2 son: 1 2 1 	\n");
							printf("Los coeficientes cuando n=3 son: 1 3 3  1 \n");
							printf("Los coeficientes cuando n=4 son: 1 4  6  4 1 \n");
							printf("Los coeficientes cuando n=5 son: 1 5 10 10  5 1	 	\n");
							printf("Los coeficientes cuando n=6 son: 1 6 15 20 15 6 1 \n");
							printf("Los coeficientes cuando n=7 son: 1 7 21 35 35 21 7 1	\n");
							printf("Los coeficientes cuando n=8 son: 1 8 28 56 70 56 28 8 1\n");
							printf("Los coeficientes cuando n=9 son: 1 9 36 84 126 126 84 36 9 1\n");
							break;
						case 3:

							
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
							
						t13=pow(a,l);
						printf("\nEl 1er termino es: %i x^3", t13);
						t23=3*pow(a,l-1)*b;
						printf("\nEl 2o termino es: %i x^2", t23);
						t33=3*a*pow(b,l-1);
						printf("\nEl 3er termino es: %i x", t33);
						t43=pow(b,l);
						printf("\nEl 4o termino es: %i", t43);
						pol3=t13,t23,t33,t43;
						printf("\nEl resultado del polinomio es: %i x^3 + %i x^2 + %i x + %i", t13,t23,t33,t43);
							break;
						case 4:
							
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
				
							t14=pow(a,m);
								printf("El primer termino es: %i x^4", t14);
							t24=4*pow(a,3)*b;
								 printf("\nEl segundo termino es: %i x^3", t24);
							t34=6*pow(a,2)*pow(b,2);
								printf("\nEl tercer termino es %i x^2",t34);
							t44=4*a*pow(b,3);
								printf("\nEl cuarto termino es %i x", t44);
							t54=pow(b,m);
								printf("\nEl quinto termino es %i", t54);
								
								
							pol4= t14,t24,t34,t44,t54;
								printf("\nEl resultado del polinomio es %i x^4 + %i x^3 + %i x^2 + %i x + %i", t14,t24,t34,t44,t54);
							break;
						case 5:
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
							
							t15=pow(a,o);
									printf("\nEl 1er termino es %i x^5", t15);
							t25=5*pow(a,o-1)*b;
									printf("\nEl 2do termino es %i x^4", t25);
							t35=10*pow(a,o-2)*pow(b,o-3);
									printf("\nEl 3er termino es %i x^3", t35);
							t45=10*pow(a,2)*pow(b,3);
								printf("\nEl 4to termino es %i x^2", t45);
							t55=5*a*pow(b,o-1);
								printf("\nEl 5to termino es %i x", t55);
							t65=pow(b,o);
								printf("\nEl 6to termino es %i", t65);
							
							pol5=t15,t25,t35,t45,t55,t65;
								printf("\nEl resultado del polinomio es %i x^5 + %i x^4 + %i x^3 + %i x^2 + %i x + %i",t15,t25,t35,t45,t55,t65);
							break;
						case 6:
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
							
							t16=pow(a,p);
									printf("\nEl 1er termino es %i x^6",t16);
							t26=6*pow(a,p-1)*b;
									printf("\nEl 2do termino es %i x^5",t26);
							t36=15*pow(a,p-2)*pow(b,p-4);
									printf("\nEl 3er termino es %i x^4",t36);
							t46=20*pow(a,3)*pow(b,3);
								printf("\nEl 4to termino es %i x^3",t46);
							t56=15*pow(a,p-4)*pow(b,p-2);
								printf("\nEl 5to termino es %i x^2",t56);
							t66=6*a*pow(b,p-1);
								printf("\nEl 6to termino es %i x", t66);
							t76=pow(b,p);
								printf("\nEl 7mo termino es %i", t76);
							
							pol6=t16,t26,t36,t46,t56,t66,t76;
								printf("\nEl resultado del polinomio es %i x^6 + %i x^5 + %i x^4 + %i x^3 + %i x^2 + %i x +	%i", t16,t26,t36,t46,t56,t66,t76);
							break;
						case 7:
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
							
							t17=pow(a,q);
									printf("\nEl 1er termino es %i x^7",t17);
							t27=7*pow(a,q-1)*b;
									printf("\nEl 2do termino es %i x^6",t27);
							t37=21*pow(a,q-2)*pow(b,q-5);
									printf("\nEl 3er termino es %i x^5",t37);
							t47=35*pow(a,q-3)*pow(b,3);
								printf("\nEl 4to termino es %i x^4",t47);
							t57=35*pow(a,3)*pow(b,4);
								printf("\nEl 5to termino es %i x^3",t57);
							t67=21*pow(a,2)*pow(b,q-2);
								printf("\nEl 6to termino es %i x^2", t67);
							t77=7*a*pow(b,q-1);
								printf("\nEl 7mo termino es %i x", t77);
							t87=pow(b,q);
								printf("\nEl 8vo término es %i", t87);
							
							pol7=t17,t27,t37,t47,t57,t67,t77,t87;
								printf("\nEl resultado del polinomio es %i x^7 + %i x^6 + %i x^5 + %i x^4 + %i x^3 + %i	x^2	+ %i x + %i", t17,t27,t37,t47,t57,t67,t77,t87);
							
							break;
						case 8:
												
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
							
							t18=pow(a,r);
									printf("\nEl 1er termino es %i x^8",t18);
							t28=8*pow(a,r-1)*b;
									printf("\nEl 2do termino es %i x^7",t28);
							t38=28*pow(a,r-2)*pow(b,2);
								printf("\nEl 3er termino es %i x^6",t38);
							t48=56*pow(a,r-3)*pow(b,3);
								printf("\nEl 4to termino es %i x^5",t48);
							t58=70*pow(a,4)*pow(b,4);
								printf("\nEl 5to termino es %i x^4",t58);
							t68=56*pow(a,r-5)*pow(b,5);
								printf("\nEl 6to termino es %i x^3", t68);
							t78=28*pow(a,r-6)*pow(b,r-2);
								printf("\nEl 7mo termino es %i x^2", t78);
							t88=8*a*pow(b,r-1);
								printf("\nEl 8vo termino es %i x", t88);
							t98=pow(b,r);
								printf("\nEl 9no termino es %i", t98);
							
							pol8=t18,t28,t38,t48,t58,t68,t78,t88,t98;
								printf("\nEl resultado del polinomio es %i x^8 + %i x^7 + %i x^6 + %i x^5 + %i x^4 + %i	x^3	+ %i x^2 + %i x	+ %i", t18,t28,t38,t48,t58,t68,t78,t88,t98);
							break;
							
						case 9:
							
							printf("\nIngrese el valor de a: "); scanf("%i", &a);
							printf("\nIngrese el valor de b: "); scanf("%i", &b);
							
							t19=pow(a,s);
									printf("\nEl 1er termino es %i x^9",t19);
							t29=9*pow(a,s-1)*b;
									printf("\nEl 2do termino es %i x^8",t29);
							t39=36*pow(a,s-2)*pow(b,2);
								printf("\nEl 3er termino es %i x^7",t39);
							t49=84*pow(a,s-3)*pow(b,3);
								printf("\nEl 4to termino es %i x^6",t49);
							t59=126*pow(a,s-4)*pow(b,4);
								printf("\nEl 5to termino es %i x^5",t59);
							t69=126*pow(a,s-5)*pow(b,5);
								printf("\nEl 6to termino es %i x^4", t69);
							t79=84*pow(a,3)*pow(b,s-3);
								printf("\nEl 7mo termino es %i x^3", t79);
							t89=36*pow(a,2)*pow(b,7);
								printf("\nEl 8vo termino es %i x^2", t89);
							t99=9*a*pow(b,s-1);
								printf("\nEl 9no termino es %i x", t99);
							t09=pow(b,s);
								printf("\nEl 10mo termino es %i", t09);
								
							pol9=t19,t29,t39,t49,t59,t69,t79,t89,t99,t09;
								printf("\nEl resultado del polinomio es %i x^9 + %i x^8 + %i x^7 + %i x^6 + %i x^5 + %i	x^4	+ %i x^3 + %i x^2 + %i x + %i", t19,t29,t39,t49,t59,t69,t79,t89,t99,t09);
							break;
						case 10:
								system("cls");
								printf("Regresando al menU principal.\n");
								Sleep(2000);
							break;
						default:
							printf("\nLa opci%cn no es v%Clida, intente de nuevo",162, 160);
						break;
				}
			}while(op2!=10);
			break; 	
	
			case 3: 
				printf ("iHasta pronto!\n");
				break;	
			default:
				printf("La opci%cn no es v%Clida, intente de nuevo",162, 160);
				break;
	}
	}while (op!=3);
return 0;
}
