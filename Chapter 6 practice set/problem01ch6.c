#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    char randomLetter, guess;
    int attempts = 0;

    // Generate a random letter from A to Z
    srand(time(0));
    randomLetter = 'A' + rand() % 26;

    printf("===== ALPHABET GUESSING GAME =====\n");
    printf("I have selected a letter between A and Z.\n");
    printf("Try to guess the letter!\n\n");

    do {
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        // Convert lowercase input to uppercase
        guess = toupper((unsigned char)guess);

        // Check whether the input is a valid alphabet
        if (guess < 'A' || guess > 'Z') {
            printf("Invalid input! Please enter a letter from A to Z.\n\n");
            continue;
        }

        attempts++;

        if (guess > randomLetter) {
            printf("Too far ahead! Try an earlier letter.\n\n");
        }
        else if (guess < randomLetter) {
            printf("Too far back! Try a later letter.\n\n");
        }
        else {
            printf("\nCongratulations! You guessed correctly!\n");
            printf("The letter was %c.\n", randomLetter);
            printf("You guessed it in %d attempts!\n", attempts);
        }

    } while (guess != randomLetter);

    return 0;
}