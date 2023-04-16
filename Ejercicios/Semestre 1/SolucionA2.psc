Algoritmo SolucionA2
	Definir numniñas,numniños,edad Como Entero
	Definir peso,estatura Como Real
	Escribir "Ingrese la cantidad de niñas."
	Leer numniñas
	Dimension lista[numniñas]
	Escribir "Ingrese la cantidad de niños."
	Leer numniños
	Dimension lista[numniños]
	Escribir "Parte N°1: Estatura de niñas que pesan entre 35-50 kg y son menores a 10 años."
	Para i<-1 Hasta numniñas  Con Paso 1 Hacer
		Escribir "Ingrese el peso de la niña (" i "). La niña debe cumplir con los parametros establecidos para saber su estatura. (Debe ser menor de 10 años y pesar entre 35 y 50 Kg)"
		Leer peso
		
	Fin Para
FinAlgoritmo
