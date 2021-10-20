print("Bienvenido a Suburbia, si compras dos pantalones con etiqueta verde, paga la mitad\n")
precio_final=0
print("Ingrese la cantidad de pantalones")
cantidad_de_pantalones = 0
cantidad_de_pantalones = int(input())
contador = 1
bandera = 1

while contador<=cantidad_de_pantalones:
	print("Ingrese el color de la etiqueta")
	color_de_etiqueta = input()
	if color_de_etiqueta != 'v':
		bandera=0
	print("Ingrese el precio del pantalon")
	precio_individual = int(input())
	precio_final=precio_final+precio_individual
	contador=contador+1
	
print(f"El posible precio seria: {precio_final}")
if bandera==0:
	print(f"El precio final es: {precio_final}")
if bandera==1:
	print(f"El precio final es: {precio_final/2}")
		
	  #Tarea: preguntar si bandera es igual a cero, el precio total se queda igual, en caso contrario, cobrar la mitad
