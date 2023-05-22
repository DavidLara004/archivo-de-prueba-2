Algoritmo leer_dos_números_y_determinar_si_el_primero_es_mayor_que_el_segundo
	// definir variables
	Definir num1,num2 Como Real
	// datos de entrada
	Escribir 'Ingrese un número real (cuando quiera poner decimales, ponga un punto. Ej: 2.5)'
	Leer num1
	Escribir 'Ingrese otro número real (cuando quiera poner decimales, ponga un punto. Ej: 2.5)'
	Leer num2
	// Proceso 
	Si num1>num2 Entonces
		Escribir 'El primer número ingresado:',num1,' si es mayor que el segundo número: ',num2
	SiNo
		Escribir 'El primer número ingresado: ',num1,' no es mayor que el segundo número: ',num2
	FinSi
FinAlgoritmo