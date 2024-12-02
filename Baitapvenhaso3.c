#include <stdio.h>
int main(){
    int n, i, j, key;
    printf("Ban hay nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap vao cac phan tu cua mang:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Mang sau khi duoc sap xep lai la: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
