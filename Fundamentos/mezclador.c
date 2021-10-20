void mezclador(char *cadena1,char *cadena2){
	
	int i;
	printf("%s %s\n",cadena1,cadena2);
	printf("%d\n",longitud(cadena1)+longitud(cadena2));
	for(i = 0;i<longitud(cadena1)+longitud(cadena2);i++){
		if(*(cadena1+i)!='\0')
			printf("%c",*(cadena1+i));
		if(*(cadena2+i)!='\0')
			printf("%c",*(cadena2+i));
	}
}