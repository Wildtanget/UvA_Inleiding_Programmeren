/**************************************************************************************************
 * Name: Noureddine Tahtahi
 * UvAnetID: 15861325
 * Study: BSc Informatica
 *
 * deel1.c:
 * - Given two integers (a and b), this program calculates and prints the values of the
 *   corresponding integers x and y.
 * - The integers x and y satisfy the following system of equations:
 *      a = x + y
 *      b = x - y
 *************************************************************************************************/
#include <stdio.h>

/**************************************************************************************************
 * Prompt the user to specify the value for a and b and calculate the corresponding value
 * for x and y using the system of equations.
 *
 * The system of equations is:
 *    a = x + y (1)
 *    b = x - y (2)
 *
 * Solving for y:
 *    y = (a - b) / 2
 *
 * By rewriting the second equation we get:
 *    x = b + y
 *
 * Returns:
 * - 1 if scanf() fails to assign values to 'a' and 'b'.
 * - 0 if the program executes successfully.
 *************************************************************************************************/
int main(void) {
    int x;
    int y;
    int a;
    int b;
    int code;   // Used for checking if any errors occured when calling scanf().

    printf("Geef de waarde voor a: ");
    code = scanf("%d", &a);
    if (code == EOF || code == 0) {
        return 1;
    }

    printf("Geef de waarde voor b: ");
    code = scanf("%d", &b);
    if (code == EOF || code == 0) {
        return 1;
    }

    y = (a - b) / 2;
    x = b + y;
    printf("x = %d\ny = %d\n", x, y);

    return 0;
}
