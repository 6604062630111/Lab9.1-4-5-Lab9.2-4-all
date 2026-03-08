#include <stdio.h>

void swapValue(int *x, int *y, int *z);
void swapArray(int arr1[], int arr2[], int n); 

int main() {
    int a = 1, b = 2, c = 3;
    int a1[3] = {1, 2, 3}, b2[3] = {3, 4, 5};

    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);

    int n = sizeof(a1) / sizeof(a1[0]);
    swapArray(a1, b2, n);

    for (int i = 0; i < n; i++) printf("%d ", a1[i]);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%d ", b2[i]);
    
    return 0;
}

void swapValue(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

void swapArray(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
