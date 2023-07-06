#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    printf("Zaichenko Bohdan IPZ-22008b\n");

    int x1, y1, r1, x2, y2, r2;

    printf("\nInput (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("\nInput (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    double distance=sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    int k;

    if (distance>r1+r2) {
        k=0;

    } else if (distance<fabs(r1-r2)) {
        k=0;

    } else if (distance==r1+r2 || distance==fabs(r1-r2)) {
        k=1;

    } else {
        k=2;
    }


    if (k==-1) {

        printf("\nInfinite intersection points.\n");
    } else {

        printf("\nIntersection points: %d\n", k);
    }

    return 0;
}
