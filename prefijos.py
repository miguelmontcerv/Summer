print("Introduce una cadena: ")
cadena = input()

tamaño_cadena = len(cadena)

print(tamaño_cadena)

print("Prefijo\nEpsilon: ")
for i in range(0,tamaño_cadena):
	for j in range(0,i+1):
		print(cadena[j],end="")
	print("")

print("Sufijo\nEpsilon: ")
for i in range(tamaño_cadena):
	for j in range(0,i):
		print(cadena[tamaño_cadena-j-1],end="")
	print("")