#include <stdio.h>
#include <string.h>

int funtion2 (int x){
	int i;
	char a[555],b[555];
	itoa(x,a,10);
	
	strcpy(a,b);
	strrev(b);
	
	if(!strcmp(b,a)){
		return 1;
	}
	
	return 0;
}

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
		if(funtion(i)&&funtion2(i)){
			max=i;
			break;
		}
	}
	
	min=max;
		for(i=x;i>1;i--){
		if(funtion(i)&&funtion2(i)){
			min=i;
			break;
		}
	}
	if(x-min>max-x){
		printf("%d",max);
	}else
		printf("%d",min);
	
}
