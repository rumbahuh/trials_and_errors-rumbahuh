#include <stdio.h>
#include <stdlib>
#include <err.h>

int
bytestoread(char *argumento)
{
	char *p;
	long l;

	l = strtol(str, &p, 10);
	if (*p != '\0') {
		return -1;
	}

	return (int)l;
}
void
copybytes(int argc, char *argv[])
{
	char *primerpath = argv[1];
	char *segundopath = argv[2];
	int bytestoread;
	int open_read;
	int open_write;
	ssize_t read;
	ssize_t write;
	
	switch (fork()) {
		case -1:
		    err("Imposible hacer fork");
		    break;
		case 0:
			if (argc == 3) {
				// hay que añadir O_CREAT
				// para crear el archivo si
				// no existe
				open_read = open(argv[1], O_RDONLY);
				bytestoread = bytestoread(argv[3]);
				open_write = open(argv[2], O_WONLY);
				read(open_read, buffer, bytestoread);
				// me falta donde guardar lo de read
				// para escribirlo en write que es
				// otro fichero
				write(open_write, buffer, bytestoread);
			}
			if (primerpath == '-') {
				printf("leer de la stdin");
			}
			if (segundopath == '-') {
				printf("sacar dr la stdout");
			}
		    break;
	}

}

int
main(int argc, char *argv[])
{
	argc--;
	if (argc < 2 || argc > 3) {
		err("Numero de argumentos incorrecto");
	}
	
	copybytes(argc, argv);
	
	exit(EXIT_SUCCESS);
}
