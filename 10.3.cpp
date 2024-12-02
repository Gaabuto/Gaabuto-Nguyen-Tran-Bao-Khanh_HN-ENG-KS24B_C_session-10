#include <stdio.h>
int main(){
	int i,j,x, ar[5]={1,5,7,9,3};
	for(i=0; i<5;i++){
		 x =ar[i];
		 j =i-1;
		 
		 while(j>=0&&ar[j]>x){
		 ar[j+1]=ar[j];
		 j=j-1; 
	} 
	ar[j+1]=x; 
  }
  
  
  
  for (i=0;i<5;i++){
  	printf("%d \t",ar[i]); 
  }
  return 0; 
} 
