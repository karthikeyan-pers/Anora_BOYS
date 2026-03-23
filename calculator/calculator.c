#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divi(float a, float b);

int main() {
    int ch = 1;

    do {
        int sw;
        float a, b;

        printf("\nEnter:\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\nEnter your choice: ");
        scanf("%d", &sw);

        if (sw == 5) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter number a: ");
        scanf("%f", &a);

        printf("Enter number b: ");
        scanf("%f", &b);

        switch (sw) {
            case 1:
                printf("Sum = %f\n", add(a, b));
                break;

            case 2:
                printf("Difference = %f\n", sub(a, b));
                break;

            case 3:
                printf("Product = %f\n", mul(a, b));
                break;

            case 4:
                if (b != 0)
                    printf("Division = %f\n", divi(a, b));
                else
                    printf("Error: Division by zero!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (ch == 1);

    return 0;
}

