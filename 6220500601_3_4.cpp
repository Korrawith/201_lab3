#include <stdio.h>

int funtion (int x){
	
	int i;
	
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	
	return 1;
}


int main(){
	
	int x,min,max,i;
	
	scanf("%d",&x);
	
	
	for(i=x;;i++){
		if(funtion(i)){
			max=i;
			break;
		}
	}
	
	min=max;
		for(i=x;i>1;i--){
		if(funtion(i)){
			min=i;
			break;
		}
	}
	if(x-min>max-x){
		printf("%d",max);
	}else
		printf("%d",min);
	
}
