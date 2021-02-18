#include<stdio.h>

int funtion (int x)
{
    int i;
    if (x==1){
        return 0;
    }
    
    for ( i = 2; i < x; i++){
        if (x%i==0){
           return x/i;
        }
    }
    return 1;
}
int main()
{
    int a,b,i,c;
    scanf("%d",&a);
    c=a;
    b=1;
    for ( i = 0; i < 3; i++){
        c=funtion(c);
    }
    if (c==1){
        printf("%d is a Lucky Number.",a);
    }
    else
        printf("%d is not a Lucky Number.",a);
    
    
}
