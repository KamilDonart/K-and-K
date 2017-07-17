#include <stdio.h>
#include <string.h>

void menu() {
	printf("Kebab factory: \n\n");
	printf("Polski - flaga pl\n");
	printf("English - flag en\n");
}

void hello(char *arg){
	if(arg=="p")printf("Hello world\n");
	else printf("witaj swiecie\n");
}

int main (int argc, const char ** argv) {
	menu();
  hello(argv[1]);
  return 0;
}
