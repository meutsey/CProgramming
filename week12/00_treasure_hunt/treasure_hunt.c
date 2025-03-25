#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int getBalance(void);
int getBet(void);
void clearArray(int *arr, int size);
void shuffleArray(int *arr, int size);
void treasureHunt(const int *arr, int size, int *balance, int bet, int player_guess);

int main(void) {
    int arr[SIZE] = {};
    int seed = 0;
    printf("Enter the seed: ");
    scanf("%d", &seed);
    srand(seed);

    int balance = getBalance();
    int bet = getBet();

    if (bet == 0) {
        printf("\nExiting the game. Thank you for playing!\n");
    }

    while (balance > 0 && bet != 0) {  // Game continues as long as balance > 0 and bet != 0
        clearArray(arr, SIZE);
        shuffleArray(arr, SIZE);

        while (bet < 0 || bet > balance) {
            if (bet < 0) {
                puts("The bet should be positive. Try again.");
            } else if (bet > balance) {
                puts("Not enough money. Try again!");
            }
            bet = getBet();
        }

        if (bet == 0) {
            break;  // Exit if bet is 0
        }

        int player_guess = 0;
        do {
            puts("\nGuess the hole where the treasure is hidden...");
            scanf("%d", &player_guess);
            if (player_guess < 1 || player_guess > 3) {
                printf("There are 3 holes. Try again.\n");
            }
        } while (player_guess < 1 || player_guess > 3);

        treasureHunt(arr, SIZE, &balance, bet, player_guess - 1);

        if (balance > 0) {
            bet = getBet();  // Ask for the next bet
        }
    }

    // Print final balance before exiting;
    if (balance > 0) {
        printf("\nExiting the game. Thank you for playing!\n");
        printf("Your cash balance is now = %d\n", balance);
    }

    return 0;
}

/*****************/
int getBalance(void) {
    int balance = 0;
    do {
        printf("----Enter your starting cash balance---- : ");
        scanf("%d", &balance);
        if (balance <= 0) {
            puts("The balance should be positive. Try again.");
        }
    } while (balance <= 0);
    return balance;
}

/****************/
int getBet(void) {
    int bet = 0;
    printf("\nEnter the amount you want to bet (0 to stop): ");
    scanf("%d", &bet);
    return bet;
}

/***********************************/
void clearArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

/***********************************/
void shuffleArray(int *arr, int size) {
    int treasure = rand() % 3;
    arr[treasure] = 1;
}

/**************************************************************************************/
void treasureHunt(const int *arr, int size, int *balance, int bet, int player_guess) {
    if (arr[player_guess] == 1) {
        printf("You found the treasure! The holes are as follows: %d, %d, %d\n", arr[0], arr[1], arr[2]);
        *balance += bet;
    } else {
        printf("No treasure here! The holes are as follows: %d, %d, %d\n", arr[0], arr[1], arr[2]);
        *balance -= bet;
    }
    printf("Your cash balance is now = %d\n", *balance);
    
    if (*balance == 0) {
        printf("\nSorry, you're out of cash. Better luck next time! Thank you for playing.\n");
    }
}
