#include <stdio.h>

int main(){
	
	int x,y[48]={0},m,n,i,j,max;
	
	scanf("%d",&x);
	
	for(i=0;i<x;i++){
		
		scanf("%d %d",&m,&n);
		
		y[m-1]+=n;
	}
	max=0;
	for (i=1;i<48;i++){
		
		if(y[max]<y[i]){
			max=i;
		}
	}
	
	printf("%d %d",max+1,y[max]);
	
}
