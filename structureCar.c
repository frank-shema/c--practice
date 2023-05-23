#include <stdio.h>
#include <stdlib.h>

struct Car {
    int numberOfDoors;
    int numberOfSits;
    char color[20];
};
 
int main() {
    struct Car* car1 = (struct Car*)malloc(sizeof(struct Car));
    struct Car* car2 = (struct Car*)malloc(sizeof(struct Car));

    printf("Enter the values for member elements of car 1:\n");
    printf("Doors: ");
    scanf("%d", &(car1->numberOfDoors));
    printf("Sits: ");
    scanf("%d", &(car1->numberOfSits));
    printf("Color: ");
    scanf("%s", car1->color);

    printf("\nEnter the values for member elements of car 2:\n");
    printf("Doors: ");
    scanf("%d", &(car2->numberOfDoors));
    printf("Sits: ");
    scanf("%d", &(car2->numberOfSits));
    printf("Color: ");
    scanf("%s", car2->color);

    printf("\nValues you gave for car 1:\n");
    printf("Doors: %d\n", car1->numberOfDoors);
    printf("Sits: %d\n", car1->numberOfSits);
    printf("Color: %s\n", car1->color);

    printf("\nValues you gave for car 2:\n");
    printf("Doors: %d\n", car2->numberOfDoors);
    printf("Sits: %d\n", car2->numberOfSits);
    printf("Color: %s\n", car2->color);

    free(car1);
    free(car2);

    return 0;
}
