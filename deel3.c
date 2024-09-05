/***************************************************************************************************
 * Name: Noureddine Tahtahi
 * UvAnetID: 15861325
 * Study: BSc Informatica
 *
 * deel3.c:
 * - This program runs a number guessing game wherein the computer cheats.
 * - The computer keeps the game running for as long as possble.
 **************************************************************************************************/
#include <stdio.h>

/***************************************************************************************************
 * Guessing game properties:
 * Min and max define the boundaries for the user input.
 *     Min <= guess <= max.
 **************************************************************************************************/
#define MIN 0
#define MAX 100

/***************************************************************************************************
 * Prompt the user for integers and decrease the boundaries accordingly. Replace the value of the
 * closest boundary until the last possible value has been guessed. Boundaries will not be changed
 * if the guessed value fell out of bounds.
 *
 * Acceptable guesses are integers between 0 and 100. The user guessed the correct number if this
 * differs 1 from both boundaries. This can be checked with the following expression:
 *    lower == guess - 1 && upper == guess + 1.
 *
 * Returns:
 * If an invalid number has been entered returns 1, else returns 0.
 **************************************************************************************************/
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
