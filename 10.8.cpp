#include <stdio.h>
int main(){
	int n, m, i, j, k, x;
    printf("Nhap so dong cua mang: ");
    scanf("%d", &n);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &m);
//2
    int ar[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("moi nhap cac gia tri cua mang [%d][%d]: ", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    
    
//3
    for (j = 0; j < n; j++) {
        for (i = 0; i < m - 1; i++) {
            for (k = j + 1; k < m; k++) {
                if (ar[i][j] > ar[k][j]) {
                    x = ar[i][j];
                    ar[i][j] = ar[k][j];
                    ar[k][j] = x;
                }
            }
        }
    }
    
    
//4
	printf("Ma tran sau khi sap xep la:\n");
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}
