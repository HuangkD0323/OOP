#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void factorize(int num) {
    printf("Prime factorization of %d:\n", num);

    int count = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0 && isPrime(i) && isPrime(num / i)) {
            printf("%d = %d * %d\n", num, i, num / i);
            count++;
        }
    }

    if (count == 0) {
        printf("No prime factorization found.\n");
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf_s("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
        factorize(num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
