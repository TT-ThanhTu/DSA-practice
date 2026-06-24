int calculate(char* s) {
    int stack[300000];
    int top = -1;

    long result = 0;
    long number = 0;
    int sign = 1;

    for (int i = 0; s[i]; i++) {

        if (s[i] >= '0' && s[i] <= '9') {
            number = number * 10 + (s[i] - '0');
        }

        else if (s[i] == '+') {
            result += sign * number;
            number = 0;
            sign = 1;
        }

        else if (s[i] == '-') {
            result += sign * number;
            number = 0;
            sign = -1;
        }

        else if (s[i] == '(') {
            stack[++top] = result;
            stack[++top] = sign;

            result = 0;
            sign = 1;
        }

        else if (s[i] == ')') {
            result += sign * number;
            number = 0;

            int prevSign = stack[top--];
            int prevResult = stack[top--];

            result = prevResult + prevSign * result;
        }
    }

    result += sign * number;

    return (int)result;
}