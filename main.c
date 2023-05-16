#include <stdio.h>

int main() {
    int x[3][3], i, j;
    int sum = 0;
    for (i = 0; i < 3; i++) { // for row

        for (j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }

    }
    for (i = 0; i < 3; i++) { // for row

        for (j = 0; j < 3; j++) {
            printf("%d", x[i][j]);
            sum = sum + x[i][j];
        }
        printf("\n");
    }
    float avrage = sum / 9.0;
    printf("%2f", avrage);

    return 0;
}
