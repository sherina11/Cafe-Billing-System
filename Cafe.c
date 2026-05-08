#include <stdio.h>
#include <stdlib.h>

// Colors
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"

// Function for line
void line() {
    printf(BLUE "+--------------------------------------+\n" RESET);
}

// Function for title
void title(char text[]) {
    line();
    printf(BLUE "| %-36s |\n" RESET, text);
    line();
}

// Pause
void pauseScreen() {
    printf(YELLOW "\nPress Enter to continue..." RESET);
    getchar();
    getchar();
}

// Main
int main() {

    int choice, qty;
    float total = 0;

    while (1) {

        system("cls || clear");

        title("CAFE BILLING SYSTEM");

        printf(CYAN " MENU\n" RESET);
        line();

        printf(YELLOW " 1. Burger      - Rs.120\n" RESET);
        printf(YELLOW " 2. Pizza       - Rs.250\n" RESET);
        printf(YELLOW " 3. Sandwich    - Rs.80\n" RESET);
        printf(YELLOW " 4. Coffee      - Rs.60\n" RESET);
        printf(YELLOW " 5. Generate Bill\n" RESET);
        printf(YELLOW " 6. Exit\n" RESET);

        line();

        printf(CYAN " Enter your choice: " RESET);
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf(" Enter quantity: ");
                scanf("%d", &qty);
                total += qty * 120;
                printf(GREEN "\n ✔ Burger Added!\n" RESET);
                pauseScreen();
                break;

            case 2:
                printf(" Enter quantity: ");
                scanf("%d", &qty);
                total += qty * 250;
                printf(GREEN "\n ✔ Pizza Added!\n" RESET);
                pauseScreen();
                break;

            case 3:
                printf(" Enter quantity: ");
                scanf("%d", &qty);
                total += qty * 80;
                printf(GREEN "\n ✔ Sandwich Added!\n" RESET);
                pauseScreen();
                break;

            case 4:
                printf(" Enter quantity: ");
                scanf("%d", &qty);
                total += qty * 60;
                printf(GREEN "\n ✔ Coffee Added!\n" RESET);
                pauseScreen();
                break;

            case 5:
                system("cls || clear");

                title("FINAL BILL");

                printf(GREEN "\n Total Amount = Rs. %.2f\n" RESET, total);

                line();

                pauseScreen();
                break;

            case 6:
                printf(GREEN "\n Thank You! Visit Again ☕\n" RESET);
                exit(0);

            default:
                printf(RED "\n Invalid Choice!\n" RESET);
                pauseScreen();
        }
    }

    return 0;
}