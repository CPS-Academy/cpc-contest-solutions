#include<stdio.h>

int main(){

    
    int A, B;
    scanf("%d%d",&A,&B);

    if(A==1 && B==2) printf("Yes\n");
    else if(A==2 && B==3) printf("Yes\n");
    else if(A==4 && B==5) printf("Yes\n");
    else if(A==5 && B==6) printf("Yes\n");
    else if(A==7 && B==8) printf("Yes\n");
    else if(A==8 && B==9) printf("Yes\n");
    else printf("No\n");


    return 0;
}