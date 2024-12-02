#include <stdio.h>

int main(){
	int count = 0,a,i,ar[5]={1,2,3,4,5};
	printf("moi ban nhap 1 so bat ki(0-99): ");
	scanf("%d",&a);
	for ( i = 0; i < 5; i ++){
	if (ar[i] == a){
		count ++;
		break;
	}


	}
		if (count > 0){
		printf("so nay co o trong mang va o vi tri thu %d", ar[i]);
}
}
