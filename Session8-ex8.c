#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum = 0;
	for (int i=0;i<3;i++) {
        printf("%2d\n", arr[i][3 - i - 1]);
        sum += arr[i][3 - i - 1];
    } 
    printf("tong cac phan tu tren duong cheo phu cua mang la: %d", sum);
	return 0;
}