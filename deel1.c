/***************************************************************************************************
 * Name: Noureddine Tahtahi
 * UvAnetID: 15861325
 * Study: BSc Informatica
 *
 * deel1.c:
 * - Given two integers (a and b), this program will calculate and print their corresponding
 *   base integers (x & y).
 * - The property of these integers must correspond to the following two expressions:
 *      a = x + y
 *      b = x - y
 **************************************************************************************************/
#include <stdio.h>

/***************************************************************************************************
 * Prompt the user to specify the value for a and b and calculate the corresponding value
 * for x and y.
 *
 * The expression 'a = x + y' can be rewritten as 'y = a - x' and the expression 'b = x - y' can be
 * rewritten as 'x = b + y'. If we substitute x in the first expression with the second expression
 * we get 'y = a - b + y', which can be reduced to 'y = (a - b) / 2'. For the value of x we can use
 * one of the expressions we found earlier, for example 'x = b + y'.
 *
 * Returns:
 * If scanf() failed to assign values to 'a' and 'b' returns 1, else returns 0.
 **************************************************************************************************/
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
