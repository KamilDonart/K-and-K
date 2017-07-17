#include <stdio.h>

void hello(char * arg){
	if(arg=="pl")printf("Hello world\n");
	else printf("witaj swiecie\n");
}

int main(int argc, char *argv[]){
	hello(argv[1])
	return 0;
}