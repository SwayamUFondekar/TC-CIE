//write an OpenMP program to transform each element with A[i]=3+A[i]+2 using #pragma omp parallel for  scedule(dynamic,2) then Switch to (static,2)
//int A1[6]={1,2,3,4,5,6} dynamic 
//int A2[6]={1,2,3,4,5,6} STATIC

#include <stdio.h>
#include <omp.h>

int main() {
    int A1[6] = {1, 2, 3, 4, 5, 6};
    int A2[6] = {1, 2, 3, 4, 5, 6};
    int i;
    #pragma omp parallel for schedule(dynamic, 2)
    for (i = 0; i < 6; i++) {
        A1[i] = 3 + A1[i] + 2;  
    }
    #pragma omp parallel for schedule(static, 2)
    for (i = 0; i < 6; i++) {
        A2[i] = 3 + A2[i] + 2;
    }
    printf("Array A1 after dynamic scheduling:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", A1[i]);
    }
    printf("\n");

    printf("Array A2 after static scheduling:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", A2[i]);
    }
    printf("\n");

    return 0;
}
