#include <stdio.h>
#include <stdlib>
#include <errno.h>

void
copybytes(int argc, char *argv[])
{
	char *primerpath = argv[1];
	char *segundopath = argv[2];
	
	switch (fork()) {
		case -1:
		    err("Imposible hacer fork");
		    break;
		case 0:
		    printf("read and write?");
			if (argc == 3) {
				printf("revisar atoi para cast char * a int)");
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
