Algoritmo ejercicio3
	definir hora,min,seg Como Entero
	Escribir "     -----Bienvenido a su reloj virtual personal-------  "
	Escribir "Porfavor, ingrese la hora en la que se encuentra"
	leer hora
	Escribir "Porfavor, ingrese los minutos en los que se encuentra  "
	leer min
	Escribir "Porfavor, ingrese los segundos en los que se encuentra  "
	leer seg
	Escribir "La hora es: "
	Mientras hora <= 23 hacer
		Mientras min <= 59 hacer
			Mientras seg <= 59 hacer
				Limpiar Pantalla
				si hora > 9 Entonces
					Escribir hora Sin Saltar
				SiNo
					Escribir "0",hora Sin Saltar
				FinSi
				
				si min > 9 Entonces
					Escribir ":",min Sin Saltar
				SiNo
					Escribir ":0",min Sin Saltar
				FinSi
				
				si seg > 9 Entonces
					Escribir ":",seg
				SiNo
					Escribir ":0",seg
				FinSi        
				seg = seg+1
				Esperar 1 segundo
			FinMientras
			seg = 0
			min = min +1
		FinMientras
		
		min = 0
		hora = hora +1
		si hora == 24 entonces
			hora = 0
		FinSi
	FinMientras  
FinAlgoritmo