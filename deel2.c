/**************************************************************************************************
 * Name: Noureddine Tahtahi
 * UvAnetID: 15861325
 * Study: BSc Informatica
 *
 * deel2.c:
 * - This program generates a triangle pattern using loops, as described in the exercise.
 * - To generate the triangle the following characters are used: '*', '.' and ' '.
 * - Every line will be closed by a newline character ('\n').
 *************************************************************************************************/
#include <stdio.h>

/**************************************************************************************************
 * Triangle properties:
 * - OFFSET and CORNER define the shape of the triangle
 * - EDGE, BODY and SPACE define which characters are used to create the triangle.
 *************************************************************************************************/
#define OFFSET 2
#define CORNER 13

#define EDGE "*"
#define BODY "."
#define SPACE " "

/**************************************************************************************************
 * Creates a triangle using a nested loop to print 1 character at a time.
 *
 * The nested loop determines the position of points within the triangle and prints their
 * corresponding character (EDGE, BODY, or SPACE). The triangle expands until the CORNER is
 * reached, after which the right boundary starts to decrease. OFFSET controls the shifting of the
 * triangle's edges.
 *
 * Returns:
 * Always return 0.
 *************************************************************************************************/
int main(void) {
    int left;
    int right;

    // Starting positions
    left = 0;
    right = 1;

    for (int row = 0; left <= right; row++) {
        for (int col = 0; col <= right; col++) {
            if (col == left || col == right) {
                printf(EDGE);
            } else if (col > left && col < right) {
                printf(BODY);
            } else {
                printf(SPACE);
            }
        }
        left += OFFSET;
        if (row < CORNER) {
            right += 2 * OFFSET;
        } else {
            right--;
        }
        printf("\n");
    }
    return 0;
}
