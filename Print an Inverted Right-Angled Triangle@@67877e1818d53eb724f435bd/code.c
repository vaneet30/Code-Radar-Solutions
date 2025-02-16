#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {  // Loop for rows (decreasing order)
        for (int j = 1; j <= i; j++) {  // Loop for printing stars
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
