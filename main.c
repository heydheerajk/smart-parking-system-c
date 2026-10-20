#include <stdio.h>
int main(void) {
    int total = 5;
    int used = 0;
    int empty = total - used;
    int menu;

    printf("=== WELCOME TO THE C PROGRAMMING PARKING SYSTEM ===\n");

    do {
        empty = total - used;

        printf("\nTOTAL PARKING SPACE: %d\n", total);
        printf("OCCUPIED SPACE: %d\n", used);
        printf("EMPTY SPACE: %d\n", empty);

        if (empty == 0) {
            printf("PARKING IS FULL!\n");
        }

        printf("\nSELECT AN OPTION:\n");
        printf("1. ADD CAR\n");
        printf("2. REMOVE CAR\n");
        printf("3. VIEW EMPTY SPACE\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");

        while (scanf("%d", &menu) != 1) {
            printf("Invalid input! Enter a number: ");

            while (getchar() != '\n') {

            }
        }

        if (menu == 1) {
            if (used < total) {
                used++;
                empty = total - used;

                printf("Car added successfully!\n");
                printf("Available spaces: %d\n", empty);
            } else {
                printf("PARKING IS FULL! Cannot add another car.\n");
            }
        }
        else if (menu == 2) {
            if (used > 0) {
                used--;
                empty = total - used;

                printf("Car removed successfully!\n");
                printf("Available spaces: %d\n", empty);
            } else {
                printf("PARKING IS ALREADY EMPTY! No car to remove.\n");
            }
        }
        else if (menu == 3) {
            empty = total - used;
            printf("Total spaces: %d\n", total);
            printf("Occupied spaces: %d\n", used);
            printf("Available spaces: %d\n", empty);
        }
        else if (menu == 4) {
            printf("Exiting parking system...\n");
        }
        else {
            printf("Invalid option! Select from 1 to 4.\n");
        }

    } while (menu != 4);

    printf("\nTHANK YOU FOR USING THIS PARKING SYSTEM!\n");

    return 0;
}
