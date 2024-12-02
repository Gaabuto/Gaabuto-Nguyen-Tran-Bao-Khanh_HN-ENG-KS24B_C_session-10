#include <stdio.h>

int main(){
	 int i,num,count = 0,position[16], ar[16] = {1,3,1,4,1,5,1,6,3,6,7,8,9,34,32,34};
    printf("Moi nhap 1 so bat ki: ");
    scanf("%d", &num);
    for ( i = 0; i < 16; i ++){
    	if(ar[i] == num){
    		position[count] = i; 
    		count ++;
		}
	}
	if (count>0) {
		printf("co phan tu %d trong mang xuat hien tai vi tri ", num);
		for (i = 0; i < count; i ++){
			printf("%d ", position[i] + 1);
		}
	}else{
		printf("khong co phan tu xuat hien trong mang");
	}
	
	return 0;
}
