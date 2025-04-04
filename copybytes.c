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
	
	switch (fork()) {
		case -1:
		    err("Imposible hacer fork");
		    break;
		case 0:
		    printf("read and write?");
			if (argc == 3) {
				bytestoread = bytestoread(argv[3]);
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
