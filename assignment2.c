#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int odd = 2 * i - 1; // calculate the ith odd number
        sum += odd; // add the ith odd number to the sum
    }
    int expected_sum = n * n;
    printf("The sum of the first %d odd numbers is %d\n", n, sum);
    printf("n^2 = %d\n", expected_sum);
    if (sum == expected_sum) {
        printf("The fact is verified!\n");
    } else {
        printf("The fact is not verified.\n");
    }
    return 0;
}
