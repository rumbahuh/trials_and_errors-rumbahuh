#include <stdio.h>
#include <stdlib>
#include <errno.h>

void
comprobarpaths(int argc, char *argv[])
{
	printf("function to check paths");
}

int
main(int argc, char *argv[])
{
	argc--;
	if (argc < 2) {
		err("Numero de argumentos incorrecto");
	}
	
	comprobarpaths(argc, argv);
	
	exit(EXIT_SUCCESS);
}
