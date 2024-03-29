#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex* c) {
    printf("Enter real part: ");
    scanf("%f", &(c->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(c->imag));
}

void writeComplex(struct Complex* c) {
    printf("Complex number: %.2f + %.2fi\n", c->real, c->imag);
}

struct Complex addComplex(struct Complex* c1, struct Complex* c2) {
    struct Complex result;
    result.real = c1->real + c2->real;
    result.imag = c1->imag + c2->imag;
    return result;
}

struct Complex multiplyComplex(struct Complex* c1, struct Complex* c2) {
    struct Complex result;
    result.real = c1->real * c2->real - c1->imag * c2->imag;
    result.imag = c1->real * c2->imag + c1->imag * c2->real;
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Reading Complex Number 1:\n");
    readComplex(&complex1);

    printf("Reading Complex Number 2:\n");
    readComplex(&complex2);

    printf("\n");

    printf("Complex Number 1:\n");
    writeComplex(&complex1);

    printf("Complex Number 2:\n");
    writeComplex(&complex2);

    printf("\n");

    sum = addComplex(&complex1, &complex2);
    printf("Sum of Complex Numbers:\n");
    writeComplex(&sum);

    product = multiplyComplex(&complex1, &complex2);
    printf("Product of Complex Numbers:\n");
    writeComplex(&product);

    return 0;
}
