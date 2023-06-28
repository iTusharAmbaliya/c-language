#include <stdio.h>
#include <conio.h>

int findMinimum(int num1, int num2) {
    int minimum;
  
    if (num1 < num2) {
        minimum = num1;
    } else {
        minimum = num2;
    }
  
    return minimum;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int minimum = findMinimum(num1, num2);
    printf("The minimum number is: %d\n", minimum);

    return 0;
}

