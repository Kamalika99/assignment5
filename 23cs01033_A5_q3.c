#include <stdio.h>

int main() {
    int num, digits[4], i, j, k, l;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 0; i < 4; i++)
    {
        digits[i] = num % 10;
        num /= 10;
    }

    for(i = 0; i < 4; i++)
     { for(j = 0; j < 4; j++) {
            if(j != i) {
                for(k = 0; k < 4; k++) {
                    if(k != i && k != j) {
                        for(l = 0; l < 4; l++) {
                            if(l != i && l != j && l != k) {
                                printf("%d%d%d%d\n", digits[i], digits[j], digits[k], digits[l]);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}