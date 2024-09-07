/**************************************************************************************************
 * Name: Noureddine Tahtahi
 * UvAnetID: 15861325
 * Study: BSc Informatica
 *
 * deel3.c:
 * - This program runs a number guessing game wherein the computer cheats.
 * - The computer keeps the game running for as long as possible.
 *************************************************************************************************/
#include <stdio.h>

/**************************************************************************************************
 * Guessing game properties:
 * Min and max define the boundaries for the user input.
 *     MIN <= guess <= MAX.
 *************************************************************************************************/
#define MIN 0
#define MAX 100

/**************************************************************************************************
 * Prompts the user to guess a number and adjusts the boundaries accordingly. The game continues
 * until the correct number is guessed. Boundaries are only updated if the guess is within bounds.
 *
 * A correct guess is made when the number differs 1 from both boundaries:
 *    lower == guess - 1 && upper == guess + 1.
 *
 * Returns:
 * - 1 if an invalid number was entered.
 * - 0 if the game ends normally.
 *************************************************************************************************/
int main(void) {
    int guess;
    int code;    // Used for checking if any errors occured when calling scanf().
    int lower;
    int upper;

    lower = MIN;
    upper = MAX;
    while (upper - lower > 1) {
        printf("Doe een gok:\n");
        code = scanf("%d", &guess);
        if (code == EOF || guess < MIN || guess > MAX) {
            printf("Ik begrijp de invoer niet.\n");
            return 1;
        }
        if (lower == guess - 1 && upper == guess + 1) {
            break ;
        } else if (guess - lower < upper - guess) {
            printf("Te laag.\n\n");
        } else if (guess - lower >= upper - guess) {
            printf("Te hoog.\n\n");
        }
        if (guess - lower >= upper - guess && guess < upper) {
            upper = guess;
        } else if (guess - lower < upper - guess && guess > lower) {
            lower = guess;
        }
    }
    printf("Je hebt het geraden!\n");
    return 0;
}
