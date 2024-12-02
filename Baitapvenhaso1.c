#include <stdio.h>
int main(){
    int n, i, x;
    int number = -1;
    printf("Ban hay nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Ban hay nhap vao cac phan tu cua mang:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Ban hay nhap vao phan tu can tim: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++){
        if(arr[i] == x){
            number = i;
            break;
        }
    }
    if(number != -1){
        printf("Ta co phan tu %d tim thay tai %d.\n", x, number + 1); 
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
    return 0;
}
