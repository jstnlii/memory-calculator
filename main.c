#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "test_add.h"
#include "mult.h"

int main() {
	printf("Enter operation, e.g. (1 + 1):\n");
	
	char question[] = "2 + 3";

	/*
	failed attempts to get user input below:
	scanf("%s", &question);
	gets(question);
	fgets(question, sizeof(question), stdin);
	*/
	
	printf("user input success\n");
	a
	for (int i = 0; i < 999; i++) {
		
	int a = atoi(strtok(question, "+-*/"));
	char* operation = strtok(NULL, "+-*/");
	int b = atoi(strtok(NULL, "+-*/"));

	printf("input conversion success\n");

	int result = 0;
	switch (*operation) {
		case '+':
			result = test_add(a, b);
			break;
		case '-':
			//result = sub(a, b);
			break;
		case '*':
			result = mult(a, b);
			break;
		case '/':
			//result = vid(a, b);
			break;
	}

	printf("Result: %d\n", result);	
	return 0;
}

