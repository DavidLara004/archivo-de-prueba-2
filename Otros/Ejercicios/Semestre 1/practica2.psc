Algoritmo practica2
	Escribir "Ingrese la cantidad de numeros que quiere para la primera lista."
	Leer numlista1
	Dimension lista1(numlista1)
	i=1
	num_mayor=lista1[i]
	Para i<-1 Hasta numlista1 Con Paso 1 Hacer
		Escribir "Ingre la cantidad N°( " i ")"
		Leer dato
	Fin Para
	Para i<-1 Hasta numlista1 Con Paso 1 Hacer
		Si lista1[i]>num_mayor Entonces
			num_mayor=lista1[i]
		Fin Si
	Fin Para
	Escribir "El mayor de los números es: " num_mayor
FinAlgoritmo
