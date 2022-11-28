#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(int argc, char* argv[])
{
    //변수 선언
    float valueOne;
    float valueTwo;
    char operator;
    float answer;
    //숫자 입력받기
    printf("숫자 입력 : ");
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