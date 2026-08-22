/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
5 3 +
Output 1:
Result = 8

Input 2:
10 2 /
Output 2:
Result = 5
*/

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter operand1 operand2 operator: ");
    if (scanf("%d %d %c", &a, &b, &op) == 3) {
        switch (op) {
            case '+': printf("Result = %d\n", a + b); break;
            case '-': printf("Result = %d\n", a - b); break;
            case '*': printf("Result = %d\n", a * b); break;
            case '/': 
                if (b != 0) printf("Result = %d\n", a / b);
                else printf("Error: Division by zero\n");
                break;
            case '%':
                if (b != 0) printf("Result = %d\n", a % b);
                else printf("Error: Modulo by zero\n");
                break;
            default: printf("Invalid operator\n");
        }
    }

    return 0;
}
