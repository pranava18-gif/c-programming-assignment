#include <stdio.h>

int main() {
    int gold, x, y;
    int longBen, blackbeard, remaining, eachPirate;

    scanf("%d", &gold);
    scanf("%d", &x);
    scanf("%d", &y);

    longBen = gold * x / 100;

    remaining = gold - longBen;

    blackbeard = remaining * y / 100;

    remaining = remaining - blackbeard;

    eachPirate = remaining / 3;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", eachPirate);

    return 0;
}
