Algoritmo sin_titulo
	Definir numniñas,edad Como Entero
	Definir peso,estatura Como Real
	Escribir '                  ------------Bienvenido-----------'
	Escribir 'Este programa consiste de tres partes, para las cuales necesitara colocar los datos que se le piden.'
	Escribir '---Parte N°1: Estatura de niñas que pesan entre 35-50 kg y son menores a 10 años.---'
	Escribir 'Ingrese la cantidad de niñas para las que desea saber la estatura.'
	Leer numniñas
	i <- 1
	Dimension lista[i]
	Para i<-1 Hasta numniñas Hacer
		Escribir 'Ingrese el peso de la niña (',i,'). La niña debe cumplir con los parametros establecidos para saber su estatura. (Debe ser menor de 10 años y pesar entre 35 y 50 Kg)'
		Leer peso
		Escribir 'Ingrese la edad de la niña (',i,'). La niña debe cumplir con los parametros establecidos para saber su estatura. (Debe ser menor de 10 años y pesar entre 35 y 50 Kg)'
		Leer edad
		Escribir 'Ingrese la estatura de la niña (',i,').La niña debe cumplir con los parametros establecidos para saber su estatura. (Debe ser menor de 10 años y pesar entre 35 y 50 Kg)'
		Leer estatura
		Si peso>=35 Y peso<=50 Y edad<10 Entonces
			Escribir 'La niña cumple con los parametros establecidos. Su estatura (" estatura ") es correcta"
		SiNo
			Escribir 'La niña no cumple con los parametros establecidos. Hablar con su medico de cabecera para mas informacion.'
		FinSi
	FinPara
	Definir numniños Como Entero
	Definir suma Como Real
	Definir prom Como Real
	Definir n Como Real
	Definir acum Como Entero
	acum <- 1
	suma <- 0
	Escribir '---Parte N°2: Promedio de peso de niños (varones)---'
	Escribir 'Ingrese la cantidad de niños para los que desea saber el promedio de peso.'
	Leer numniños
	Mientras acum<=numniños Hacer
		Escribir 'Ingrese el peso del niño numero (',acum,')'
		Leer n
		suma <- suma+n
		acum <- acum+1
	FinMientras
	prom <- suma/numniños
	Escribir 'El promedio de peso de todos los niños (varones) ingresados es ',prom
	Escribir '---Parte N°3: Porcentajes de estatura entre niños y niñas.---'
	Definir nummenor140,numentre140y170,nummayor170,totalniñas,totalniños Como Entero
	Definir alturaniña,alturaniño Como Real
	Escribir 'Ingrese la cantidad de niños (varones)'
	Leer totalniños
	Escribir 'Ingrese la cantidad de niñas.'
	Leer totalniñas
	nummenor140 <- 0
	numentre140y170 <- 0
	nummayor170 <- 0
	i<-1
	Dimension lista[i]
	Para i<-1 Hasta totalniñas Hacer
		Escribir 'Escriba la altura de la niña (',i,')'
		Leer alturaniña
		Si alturaniña<1.40 Entonces
			nummenor140 <- nummenor140+1
		FinSi
		Si alturaniña>=1.40 Y alturaniña<=1.70 Entonces
			numentre140y170 <- numentre140y170+1
		FinSi
		Si alturaniña>1.70 Entonces
			nummayor170 <- nummayor170+1
		FinSi
	FinPara
	Para i<-1 Hasta totalniños Hacer
		Escribir 'Escriba la altura de el niño (varon) (',i,')'
		Leer alturaniño
		Si alturaniño<1.40 Entonces
			nummenor140 <- nummenor140+1
		FinSi
		Si alturaniño>=1.40 Y alturaniño<=1.70 Entonces
			numentre140y170 <- numentre140y170+1
		FinSi
		Si alturaniño>1.70 Entonces
			nummayor170 <- nummayor170+1
		FinSi
	FinPara
	totalfinal <- totalniñas+totalniños
	Escribir 'El porcentaje de niños y niñas menores a 1.40 cm es de: ',nummenor140*100/totalfinal,'%'
	Escribir 'El promedio de la estatura de niños y niñas entre 1.40 y 1.70 cm es de: ',numentre140y170*100/totalfinal,'%'
	Escribir 'El promedio de la estatura de niños y niñas mayor a 1.70 cm es de: ',nummayor170*100/totalfinal,'%'
FinAlgoritmo
