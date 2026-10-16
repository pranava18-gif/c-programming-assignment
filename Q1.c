#include <stdio.h>

int main() {
    float distance, fare = 100, discount;
    int member;

    printf("Enter distance: ");
    scanf("%f", &distance);

    printf("Is member? (1 for true, 0 for false): ");
    scanf("%d", &member);

    if (distance > 10) {
        fare = fare + (distance - 10) * 20;
    }

    if (member == 1) {
        discount = fare * 0.10;
        fare = fare - discount;
    }

    printf("Final Fare: Rs.%.0f\n", fare);

    return 0;
}
