#include <stdio.h>
#include <stdlib.h>
#include "carQuery.h"


int main() {
    int choice;
    while (1) {
        printf("1. Customer Related Query\n");
        printf("2. Car Related Query\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                // add customer query fn
                break;
            case 2:
                car_query();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}