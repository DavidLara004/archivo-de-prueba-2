Proceso Solucion
	Definir lista, peso, edad,altura, numninas, i, j, alt Como Real;
	Definir msj Como Caracter;
	msj = "La paciente no cumple con los parametros indicados. Para más información, consulte con su nutricionista de confianza";
	Escribir '                  ------------Bienvenido-----------'
	Escribir 'Este programa consiste de tres partes, por lo tanto al colocar datos de los pacientes estos serviran para todas las partes."
	Escribir '---Parte N°1: Estatura de niñas que pesan entre 35-50 kg y son menores a 10 años.---'
	Escribir "Ingrese el número de pacientes (niñas) cuya altura desea conocer";
	Leer numninas;
	Dimension lista[numninas];
	Para i<-1 Hasta numninas Con Paso 1 Hacer
		Escribir "Ingrese el peso de la paciente ", i,":";
		Leer peso;
		Escribir "Ingrese la edad de la paciente ", i,":";
		Leer edad;
		Escribir "Ingrese la altura de la paciente ", i,":";
		Leer altura;
		Si peso>=35 Y peso<=50 Y edad<10 Entonces
			lista[i]<-altura
			Escribir 'La niña cumple con los parametros establecidos. Su estatura (" estatura ") es correcta"
		SiNo
			lista[i]<-altura
			Escribir 'La niña no cumple con los parametros establecidos. Hablar con su medico de cabecera para mas informacion.'
		FinSi
	FinPara
	Escribir '---Parte N°2: Porcentajes de estatura entre niños y niñas.---'
	nummenor140 <- 0
	numentre140y170 <- 0
	nummayor170 <- 0
	Escribir "Ingrese el número de pacientes (varon) cuya porcentaje de altura desea conocer";
	Leer numninos
	Para j<-1 Hasta numninos Hacer
		Escribir 'Escriba la altura de el paciente (varon) (',j,')'
		Leer alturaniño
		Si alturaniño<140 Entonces
			nummenor140 <- nummenor140+1
		FinSi
		Si alturaniño>=140 Y alturaniño<=170 Entonces
			numentre140y170 <- numentre140y170+1
		FinSi
		Si alturaniño>170 Entonces
			nummayor170 <- nummayor170+1
		FinSi
	FinPara
	Para i<-1 Hasta numninas Hacer
		Si lista[i]<140 Entonces
			nummenor140<-nummenor140+1
		FinSi
		Si lista[i]>=140 Y alturaniña<=170 Entonces
			numentre140y170<-numentre140y170+1
		FinSi
		Si lista[i]>170 Entonces
			nummayor170<-nummayor170+1
		FinSi
	FinPara
	totalfinal <- numninas+numninos
	Escribir 'El porcentaje de niños y niñas menores a 1.40 cm es de: ',nummenor140*100/totalfinal,'%'
	Escribir 'El promedio de la estatura de niños y niñas entre 1.40 y 1.70 cm es de: ',numentre140y170*100/totalfinal,'%'
	Escribir 'El promedio de la estatura de niños y niñas mayor a 1.70 cm es de: ',nummayor170*100/totalfinal,'%'
	Escribir '---Parte N°3: Promedio de peso de niños (varones)---'
	acum <- 1
	suma <- 0
	Mientras acum<=numninos Hacer
		Escribir 'Ingrese el peso del paciente (',acum,')'
		Leer n
		suma <- suma+n
		acum <- acum+1
	FinMientras
	prom <- suma/numninos
	Escribir 'El promedio de peso de todos los pacientes (varones) ingresados es ',prom
FinProceso
