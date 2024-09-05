/***************************************************************************************************
 * Name: Noureddine Tahtahi
 * UvAnetID: 15861325
 * Study: BSc Informatica
 *
 * deel2.c:
 * - This program recreates the triangle shown in the exercise using loops.
 * - To create the triangle the following characters are used: '*', '.' and ' '.
 * - Every line will be closed by a newline character ('\n').
 **************************************************************************************************/
#include <stdio.h>

/***************************************************************************************************
 * Triangle properties:
 * - Offset and corner are used to define the shape of the triangle
 * - Edge, body and space are used to define which characters are used to create the triangle.
 **************************************************************************************************/
#define OFFSET 2
#define CORNER 13

#define EDGE "*"
#define BODY "."
#define SPACE " "

/***************************************************************************************************
 * Creates a triangle using a nested loop to print 1 character at a time.
 *
 * The nested loop checks per row which points reside inside the triangle, which points are on
 * the edge, and prints their corresponding character. After a certain threshold (corner), starts
 * decreasing the end until the two edges meet. The value of offset determines how far the edge
 * will shift on the next row, the right edge will always shift twice as much as the left edge.
 *
 * Returns:
 * Will always return 0.
 **************************************************************************************************/
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
