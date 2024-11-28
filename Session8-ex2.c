#include <stdio.h>
int main() {
    int arr[] = {5,10,15,20,25,30};
    int n = sizeof(arr)/sizeof(arr[0]);  
    int x;
    printf("nhap phan tu can tim: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("vi tri phan tu trong mang la %d\n", i+1);
            count++;  
            break;
        }
    }
    if (count == 0) {
        printf("phan tu khong thuoc mang \n");
    }
    return 0;
}
