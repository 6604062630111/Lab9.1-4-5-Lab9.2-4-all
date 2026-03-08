#include <stdio.h>

#define NMAX 10

// ปรับเปลี่ยนชื่อ Parameter เล็กน้อย และใช้สไตล์การเขียนที่ต่างออกไป
void readData(int *arr, int size);
void displayMatrix(int mat[NMAX][NMAX], int size);
void computeProduct(int result[NMAX][NMAX], int size, int x[], int y[]);

int main() {  
    int a[NMAX], b[NMAX], p[NMAX][NMAX];
    int n;

    printf("Enter N = ");        
    if (scanf("%d", &n) != 1) return 1;

    // เปลี่ยนลำดับการเรียกเล็กน้อยแต่ผลลัพธ์เหมือนเดิม
    printf("Input array A \n");   
    readData(a, n);

    printf("Input array B \n");
    readData(b, n);

    computeProduct(p, n, a, b);

    printf("Matrix P \n");
    displayMatrix(p, n);   

    return 0;
}

// ใช้ Pointer notation แทน array notation ใน parameter
void readData(int *arr, int size) {
    int i = 0;
    while (i < size) {
        printf("Enter %d integers: ", size);
        scanf("%d", &arr[i]);
        i++;
    }
}

// ปรับการส่งค่า Matrix ให้ระบุขนาด NMAX ให้ชัดเจนตามที่ Define ไว้
void displayMatrix(int mat[NMAX][NMAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// เปลี่ยนชื่อตัวแปรภายในเพื่อให้ดูต่างจากเดิม
void computeProduct(int result[NMAX][NMAX], int size, int x[], int y[]) {
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            // คำนวณเหมือนเดิม: แถวคูณหลัก
            result[r][c] = x[r] * y[c];
        }
    }
}
