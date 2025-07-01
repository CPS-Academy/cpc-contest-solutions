#include<stdio.h>

int main(){

    int arr[9][9];

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int flag=1;

    for(int i=0; i<9; i++){
        int freq[10];
        for(int j=0; j<10; j++){
            freq[j]=0;
        }
        for(int j=0; j<9; j++){
            freq[arr[i][j]]++;
        }
        for(int j=1; j<=9; j++){
            if(freq[j]!=1){
                flag=0;
                break;
            }
        }
    }

    for(int j=0; j<9; j++){
        int freq[10];
        for(int i=0; i<10; i++){
            freq[i]=0;
        } 
        for(int i=0; i<9; i++){
            freq[arr[i][j]]++;
        }
        for(int i=1; i<=9; i++){
            if(freq[i]!=1){
                flag=0;
                break;
            }
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(i%3==0 && j%3==0){
                int freq[10];
                for(int k=0; k<10; k++){
                    freq[k]=0;
                }
                for(int i2=i; i2<i+3; i2++){
                    for(int j2=j; j2<j+3; j2++){
                        freq[arr[i2][j2]]++;
                    }
                }
                for(int k=1; k<=9; k++){
                    if(freq[k]!=1){
                        flag=0;
                        break;
                    }
                }
            }
        }
    }

    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}