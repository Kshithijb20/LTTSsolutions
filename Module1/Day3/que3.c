#include <stdio.h>

int removeDigit(int num, int digit) {
    int divisor = 1;
    int temp = num;

    while (temp > 9) {
        divisor *= 10;
        temp /= 10;
    }
    int numOut= (num / (divisor * 10)) * divisor + (num % divisor);

    return numOut;
}

int largestNum(int num) {
    int largest = 0;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;

        int numOut= removeDigit(num, digit);
        if (numOut> largest) {
            largest = numOut;
        }

        temp /= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = largestNum(num);

    printf("Largest number after deleting a digit: %d\n", largest);

    return 0;
}
