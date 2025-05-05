#include <stdio.h>

int main() {
    char operation;
    int first_num;
    int second_num;
    int result;

    printf("\nChoose number 1: \n");
    scanf("%d", &first_num);

    printf("\nChoose operation (+,-,*,/): \n");
    scanf(" %c", &operation);  

    printf("\nChoose number 2: \n");
    scanf("%d", &second_num);

    if (operation == '+') {
        result = first_num + second_num;
        printf("Result is: %d\n", result);
    } else if (operation == '-') {
        result = first_num - second_num;
        printf("Result is: %d\n", result);
    } else if (operation == '*') {
        result = first_num * second_num;
        printf("Result is: %d\n", result);
    } else if (operation == '/') {
        if (second_num == 0) {
            printf("Error! Division by zero\n");
        } else {
            result = first_num / second_num;
            printf("Result is: %d\n", result);
        }
    } else {
        printf("Invalid operation\n");
    }

    return 0;
}
