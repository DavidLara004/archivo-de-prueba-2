Algoritmo nutrición
	definir edad, altura, peso, n Como Entero
	definir genero Como Caracter
	escribir "Ingrese el número de pacientes:"
	leer n
	pesoNiño = 0
	pesoPromedio = 0
	repetir
		n = n - 1
		escribir "Ingrese la edad, peso, altura y genero del paciente"
		leer edad, peso
		leer altura, genero
		
		si peso >= 35 y peso <= 50 y edad < 10 entonces
			si genero = "niña" Entonces
				mostrar "Su altura es: ", altura
			FinSi
		FinSi
		
		si altura < 140 Entonces
			porcentaje1 = n/100
		FinSi
		si altura >= 140 y altura <= 170 Entonces
			porcentaje2 = n/100
		FinSi
		si altura > 170 Entonces
			porcentaje3 = n/100
		FinSi
		
		si genero = "niño" entonces
			pesoPromedio = pesoPromedio + peso
			pesoNiño = pesoNiño + 1
			promedio = pesoPromedio/pesoNiño
		FinSi
		
	Hasta Que n = 0
	mostrar "El procentaje de altura menores a 140cm es: ", porcentaje1 "%"
	mostrar "El procentaje de altura mayor a 140cm y menor a 170cm es: ", porcentaje2 "%"
	mostrar "El procentaje de altura mayor a 170cm es: ", porcentaje3 "%"
	mostrar "El promedio de peso en niños es: ", promedio
FinAlgoritmo
