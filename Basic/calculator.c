//4. WAP to perform addition, substraction, multiplication and division operations based on functions

#include <stdio.h>
#include<stdlib.h>

float addition(float num1, float num2)
{
    return num1 + num2;
}

float subtraction(float num1, float num2)
{
    return num1 - num2;
}

float multiplication(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    return num1 / num2;
}


int main()
{
    char op;
    float num1, num2, result = 0.0;

    printf("Enter [number 1] [+ - * /] [number 2]\n");

    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+': 
            result = addition(num1, num2);
            break;

        case '-': 
            result = subtraction(num1, num2);
            break;

        case '*': 
            result = multiplication(num1, num2);
            break;

        case '/': 
            result = division(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}
