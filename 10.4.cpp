#include<stdio.h>

int main(){
	int x,i,j,ar[5]={1,5,7,9,3};
	for(i=0;i<5;i++){
		int min =i;
		for(j=i;j<5;j++){
			if(ar[j]<ar[min]){
				min = j;
			}
		}
		if(min!=i){
			x = ar[min];
			ar[min]=ar[i];
			ar[i]=x ;
		}
	}
	for(i=0;i<5;i++){
		printf("%d \t",ar[i]);
	}
	return 0;
}
