#include <stdio.h>
#include <string.h>

int main() {
	printf("Enter operation, e.g. (1+1):\n");
	
	char question[100];
	fgets(question, sizeof(question), stdin);

	int a = atoi(strtok(question, "+-*/"));
	char* operation = strtok(NULL, "+-*/");
	int b = atoi(strtok(NULL, "+-*/"));

	int result;
	switch (*operation) {
		case '+':
			result = add(a, b);
			break;
		case '-':
			result = sub(a, b);
			break;
		case '*':
			result = mult(a, b);
			break;
		case '/':
			result = div(a, b);
			break;
	}

	printf("Result: %d\n", result);	
	return 0;
}

