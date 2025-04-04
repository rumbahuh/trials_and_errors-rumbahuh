#include <stdio.h>
#include <stdlib>
#include <errno.h>

void
comprobarpaths(int argc, char *argv[])
{
	char *primerpath = argv[1];
	char *segundopath = argv[2];
	if (argc == 3) {
		printf("revisar atoi para cast char * a int)");
	}
	
	printf("function to check paths");

	// if primer path exists
	//     usar
	//  default crear o al reves
}

int
main(int argc, char *argv[])
{
	argc--;
	if (argc < 2 || argc > 3) {
		err("Numero de argumentos incorrecto");
	}
	
	comprobarpaths(argc, argv);
	
	exit(EXIT_SUCCESS);
}
