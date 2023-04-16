SubProceso c(lista Por Referencia)
	Escribir "ingrese la cantidad de numeros"
	Leer cant
	Para p=1 Hasta cant Hacer
		Escribir "ingrese los num " p
		Leer lista(p)
	FinPara
	Para k=1 Hasta cant Hacer
		Para j=1 hasta (cant-1) Hacer
			si lista(j)< lista(j+1) Entonces
				caja = lista(j)
				lista(j)= lista(j+1)
				lista(j+1)= caja
				
			FinSi
			
		FinPara
	FinPara
FinSubProceso



SubProceso a=gato(lista)
	Para i=1 Hasta cant Hacer
		Escribir lista(i)
	FinPara
FinSubProceso

Algoritmo sin_titulo
	Definir a,i,j,k,p,caja,cant Como Real
	Dimension lista(100)
	a=gato(lista)
	
FinAlgoritmo
