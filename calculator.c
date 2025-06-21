#include <stdio.h>

int main(void)
{
    char operator;
    double operand_1, operand_2;

    printf("Enter Operator (+, -, *, /): ");
    scanf("%c", &operator);
    
    printf("Enter operands (numbers): ");
    scanf("%lf %lf", &operand_1, &operand_2);

    switch (operator)
    {
    case '+':
        printf("%f + %f = %f\n",
            operand_1,
            operand_2,
            operand_1 + operand_2);
        break;

    case '-':
        printf("%f - %f = %f\n",
        operand_1,
        operand_2,
        operand_1 - operand_2);
        break;

        case '*':
        printf("%f * %f = %f\n",
        operand_1,
        operand_2,
        operand_1 * operand_2);
        break;

        case '/':
        printf("%f / %f = %f\n",
        operand_1,
        operand_2,
        operand_1 / operand_2);
    }


    return 0;
}