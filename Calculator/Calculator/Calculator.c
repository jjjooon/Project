#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(int argc, char* argv[])
{
    //���� ����
    float valueOne;
    float valueTwo;
    char operator;
    float answer;
    //���� �Է¹ޱ�
    printf("���� �Է� : ");
    scanf_s("%f %c %f", &valueOne, &operator, &valueTwo,4);

    switch (operator)
    {
    case '/': answer = valueOne / valueTwo;
        break;
    case '*': answer = valueOne * valueTwo;
        break;
    case '+': answer = valueOne + valueTwo;
        break;
    case '-': answer = valueOne - valueTwo;
        break;
    case '^': answer = pow(valueOne, valueTwo);
        break;
    }
    printf("%g%c%g =  %g\n\n", valueOne, operator, valueTwo, answer);
    return 0;
}