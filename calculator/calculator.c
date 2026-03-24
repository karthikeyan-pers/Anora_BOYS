#include <stdio.h>
#include "functions.h"


int main() {
    int ch = 1,e=0;
    float a, b;
    unsigned long long x;
    do {
        int sw;
        

        printf("\nEnter:\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.SQUARE ROOT\n6.EXPONENT\n7.EXIT\nEnter your choice: ");
        scanf("%d", &sw);

        if (sw == 7) {
            printf("Exiting...\n");
            break;
        }
        if(sw==6){
        printf("Enter number a: ");
        scanf("%llu", &x);
        printf("Enter number b: ");
        scanf("%d",&e);
        }
        else {
        printf("Enter number a: ");
        scanf("%f", &a);
        }
        if(sw<5)
        {
        printf("Enter number b: ");
        scanf("%f", &b);
        }

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
                    printf("Division = %f\n", div(a, b));
                else
                    printf("Error: Division by zero!\n");
                break;
            case 5:
                 (a<0)?printf("No square root for negative number"):printf("square root of %f : %f",a,square_root(a));
                 break;
            case 6:
                 printf("Exponent %llu ^ %d : %llu",x,e,exponent(x,e));
                 break;
            default:
                printf("Invalid choice!\n");
        }

    } while (ch == 1);

    return 0;
}

