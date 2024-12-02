#include <stdio.h>
int main(){
    int n, i, j, number;
    printf("Ban hay nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhapp vao cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                number = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = number;
            }
        }
    }
    printf("Mang sau khi duoc sap xep lai la: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
