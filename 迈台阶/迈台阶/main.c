#include <stdio.h>

int countWays(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }

    int prev1 = 1;
    int prev2 = 2;
    int ways = 0;

    for (int i = 3; i <= n; i++) {
        ways = prev1 + prev2;
        prev1 = prev2;
        prev2 = ways;
    }

    return ways;
}

int main() {
    int n;
    printf("����̨�׵������� ");
    scanf_s("%d", &n);

    int ways = countWays(n);

    printf("�ʵ� %d ��̨�׵ķ������� %d\n", n, ways);

    return 0;
}
