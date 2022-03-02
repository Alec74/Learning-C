/* (Project 7.07) Modifying fractions */
#include <stdio.h>

int main(void)
{
	int num1, denom1, op, num2, denom2, resultNum, resultDenom;

	printf("Enter two fractions (x/y(+ - / *)a/b): ");
	scanf("%d/%d", &num1, &denom1);
	op = getchar();
	scanf("%d/%d", &num2, &denom2);

	if (op == '+'){
		resultNum = num1 * denom2 + num2 * denom1;
		resultDenom = denom1 * denom2;
	} else if(op == '-'){
		resultNum = num1 * denom2 - num2 * denom1;
		resultDenom = denom1 * denom2;
	} else if(op == '*'){
		resultNum = num1 * num2;
		resultDenom = denom1 * denom2;
	} else if(op == '/'){
		resultNum = num1 * denom2;
		resultDenom = denom1 * num2;
	} else{
		printf("invalid operator\n");
		return 0;
	}

	printf("The result is %d/%d\n", resultNum, resultDenom);

	return 0;
}
