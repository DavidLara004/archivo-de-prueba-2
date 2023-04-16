Algoritmo Leer_tres_números_y_determinar_que_número_es_mayor_de_los_tres
	//definir variables
	Definir num1 Como Real
	Definir num2 Como Real
	Definir num3 Como Real
	//datos de entrada
	Escribir "Ingrese un número real (cuando quiera poner decimales, ponga un punto. Ej: 2.5)"
	Leer num1
	Escribir "Ingrese un segundo número real (cuando quiera poner decimales, ponga un punto. Ej: 2.5)"
	Leer num2
	Escribir "ngrese un tercer número real (cuando quiera poner decimales, ponga un punto. Ej: 2.5)"
	Leer num3
	// Proceso 
	Si num1>num2 y num1>num3 Entonces
		Escribir "El primer número ingresado (",num1,") es mayor que los dos otros números ingresados (",num2 ")" "y (" num3 ")"
	FinSi
	Si num2>num1 y num2>num3 Entonces
		Escribir "El segundo número ingresado (",num2,") es mayor que los dos otros números ingresados (",num1 ")" "y (" num3 ")"
	FinSi
	Si num3>num1 y num3>num2 Entonces
		Escribir "El tercer número ingresado (",num3,") es mayor que los dos otros números ingresados (",num1 ")" "y (" num2 ")"
	FinSi
	Si num1==num2 y num1==num3 y num2==num3 Entonces
		Escribir "Los tres números ingresados son iguales"
	FinSi
	Si num1==num2 y num1>num3 Entonces
		Escribir "El primer número ingresado (",num1,") y el segundo número (" num2 ") ingresado son iguales y mayores al tercer número ingresado (" num3 ")"
	FinSi
	Si num1==num3 y num1>num2 Entonces
		Escribir "El primer número ingresado (",num1,") y el tercer número ingresado (" num3 ") son iguales y mayores al segundo número ingresado (" num2 ")"
	FinSi
	Si num2==num3 y num2>num1 Entonces
		Escribir "El segundo número ingresado (",num2,") y el tercer número ingresado (" num3 ") son iguales y mayores al primer número ingresado (" num1 ")"
	FinSi
FinAlgoritmo
