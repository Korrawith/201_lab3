#include<stdio.h>
int main ()
{
   int i,j,a[5][4],b[20]={},k,sum=0;
   for(i=0;i<5;i++){
      for(j=0;j<4;j++){
   			scanf("%d",&a[i][j]);
  			b[i]=b[i]+a[i][j];
  			if(b[i]>sum)
   			{
      			sum =b[i];
      			k=i;
   			}
   		}
   }
   printf("%d %d",k+1,sum);
   return 0;
}
