#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x=n%100;
    if(x<10){
        printf("0");
    }
    printf("%d",x);
}