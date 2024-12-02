#include <stdio.h>

int main(){
	int i,num,n = 10,ar[10] ={1,7,8,5,6,13,23,26,47,82};
	for(i=0;i<n;i++){
		for(int j=0;j<10-i-1;j++){
			if(ar[j]>ar[j+1]){
				int temp;
				temp = ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp; 
			} 
		} 
	} 
	for(i=0;i<10;i++){
		printf("%d \t",ar[i]); 
	} 
	
	
	
	
	printf("\nnhap gia tri can tim: ");
	scanf("%d",&num);
	
	
	int mid,left = 0, right = n - 1;
	while ( left <= right){
		mid = (left + right) / 2;
		if(ar[mid] == num) {
			printf("gia tri co trong mang va o vi tri %d", mid + 1);
		}
		if(ar[mid] < num){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}

	
	
	
	
	return 0; 
}
