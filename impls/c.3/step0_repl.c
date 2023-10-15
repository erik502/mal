#include <stdio.h>

#include "libs/editline/editline/readline.h"

char* READ(char* s) {
	return s;
}

char* EVAL(char* s) {
	return s;
}

void PRINT(char* s) {
	printf("%s\n", s);
}

void rep(char* s) {
	PRINT(EVAL(READ(s)));
}

int main() {
	while (1) {
		char* input = readline("user>");
		if (!input) {
			printf("\n");
			break;
		}
		add_history(input);

		rep(input);

		rl_free(input);
	}
}