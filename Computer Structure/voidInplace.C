void inplace_swap(int *x, int *y) {
*y = *x ^ *y; /* Step 1 */
*x = *x ^ *y; /* Step 2 */
*y = *x ^ *y; /* Step 3 */
}
