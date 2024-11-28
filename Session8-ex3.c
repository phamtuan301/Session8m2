#include <stdio.h>
int main(){
	int x;
	while(x<=0){
		printf("moi ban nhap so nguyen bat ki(>0): ");
		scanf("%d", &x);
	}
	int arr[x][x];
	for(int i=0;i<x;i++){
		for (int j=0;j<x;j++){
			printf("moi nhap phan tu cua mang: ");
			scanf("%d", &arr[i][j]);
		}
	}
		for(int i=0;i<x;i++){
		for (int j=0;j<x;j++){
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}