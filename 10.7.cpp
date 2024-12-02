
#include <stdio.h>
int main(){
	int n, m, i, j, k, x;
    printf("Nhap so dong cua mang: ");
    scanf("%d", &n);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &m);
    
    int ar[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("moi nhap cac gia tri cua mang: ar[%d][%d]: ", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    
    

    for (i = 0; i < n; i++) {
        for (j = 0; j < m - 1; j++) {
            for (k = j + 1; k < m; k++) {
                if (ar[i][j] > ar[i][k]) {
                    x = ar[i][j];
                    ar[i][j] = ar[i][k];
                    ar[i][k] = x;
                }
            }
        }
    }
    
    
    
	printf("Ma tran sau khi sap xep la:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}
