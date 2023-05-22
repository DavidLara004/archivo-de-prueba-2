Algoritmo Leer_un_número_entero_y_determinar_si_es_de_uno_o_dos_o_tres_o_cuatro_dígitos_validar_que_el_número_no_sea_negativo
	//definir variables
	Definir num1 Como Entero
	//datos de entrada
	Escribir "Ingrese un número entero. (No puede ser un número negativo. Ej:-4)"
	Leer num1
	//Proceso 
	si num1<10 y num1>=0 Entonces
		Escribir "El número ingresado (" num1 ") contiene 1 dígito."
	FinSi
	si num1>=10  y num1<100 Entonces
		Escribir "El número ingresado (" num1 ") contiene 2 dígitos."
	FinSi
	si num1>=100 y num1<1000 Entonces
		Escribir "El número ingresado (" num1 ") contiene 3 dígitos."
	FinSi
	si num1>=1000 y num1<10000
		Escribir "El número ingresado (" num1 ") contiene 4 dígitos."
	FinSi
	si num1>=10000
		Escribir "El número ingresado (" num1 ") contiene más de 4 dígitos."
	FinSi
	si num1<0 Entonces 
		Escribir "No se puede continuar porque es un número negativo."
	FinSi
FinAlgoritmo
