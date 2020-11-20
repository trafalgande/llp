#include <stdio.h>

int x[] = {2, 4, 6, 8, 10, 12};
int y[] = {3, 5, 7, 9, 11, 13};

#define arr_size(array) sizeof array / sizeof *array

void print_array(int *array, size_t size) {
    for (int i = 0; i < size; i++)
        printf("%d\t", array[i]);
    printf("\n");

}

int scalar(const int a[], const int b[], size_t sz) {
    size_t i;
    int ans = 0;
    for (i = 0; i < sz; i++)
        ans += a[i] * b[i];
    return ans;
}

int main() {
    printf("x[%ld]:\n", arr_size(x));
    print_array (x, arr_size(x));
    printf("y[%ld]:\n", arr_size(y));
    print_array (y, arr_size(y));
    printf("Scalar product is: %d\n", scalar(x, y, arr_size(x)));
    return 0;
}
