#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    // 1 = Rock, 2 = Paper, 3 = Scissors
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n1. Rock\n2. Paper\n3. Scissors\n> ");
    scanf("%d", &userChoice);

    // Generate computer choice
    srand(time(0));
    computerChoice = rand() % 3 + 1;

    // Show computer's choice
    printf("Computer chose: ");
    switch(computerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }

    // Determine winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf(" Computer wins!\n");
    }

    return 0;
}
