#include <stdio.h>

int main(){
	int i,ar[5] ={1,7,8,56,5};
	for(i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			if(ar[j]>ar[j+1]){
				int temp;
				temp = ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp; 
			} 
		} 
	} 
	for(i=0;i<5;i++){
		printf("%d \t",ar[i]); 
	} 
	return 0; 
}
