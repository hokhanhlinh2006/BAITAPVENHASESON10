#include <stdio.h>
int main(){
    int n, i, j, giatriNho, temp;
    printf("Ban hay nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu vao:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++){
        giatriNho = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[giatriNho]) {
                giatriNho = j;
            }
        }
        if(giatriNho != i) {
            temp = arr[i];
            arr[i] = arr[giatriNho];
            arr[giatriNho] = temp;
        }
    }
    printf("MAng sau khi duoc sap xep la: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
