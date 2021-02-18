#include<stdio.h>

int main()
{
    int u,i=2;

    scanf("%d",&u);
    if (u==1){
        printf("1\n");
    }
    while (u !=1){
        while(u%i==0){
            printf("%d\n",i);
            u=u/i;
        }
        i++;
    }
    printf("0");
}
