#include<stdio.h>
#include<string.h>

char s[1000001];

int main(){

    scanf("%s",s);

    int n = strlen(s);

    int freq[26];
    for(int i=0; i<26; i++) freq[i]=0;

    for(int i=0; i<n; i++){
        freq[s[i]-65]++;
    }

    if(n%2==0){
        //n even
        int flag=1;

        for(int i=0; i<26; i++){
            if(freq[i]%2==1){
                flag=0;
                break;
            }
        }

        if(flag==0) printf("NO SOLUTION\n");
        else{
            for(int i=0; i<26; i++){
                //freq[i]/2
                for(int j=0; j<freq[i]/2; j++){
                    char ch = (char)('A'+i);
                    printf("%c",ch);
                }
            }

            for(int i=25; i>=0; i--){
                //freq[i]/2
                for(int j=0; j<freq[i]/2; j++){
                    char ch = (char)('A'+i);
                    printf("%c",ch);
                }
            }
            printf("\n");
        }
    }
    else{
        int cnt=0, ind=-1;

        for(int i=0; i<26; i++){
            if(freq[i]%2==1){
                cnt++;
                ind=i;
            }
        }

        if(cnt==1){
            for(int i=0; i<26; i++){
                if(i!=ind){
                    for(int j=0; j<freq[i]/2; j++){
                        char ch = (char)('A'+i);
                        printf("%c",ch);
                    }
                }
            }

            //ind -> freq[ind]
            for(int j=0; j<freq[ind]; j++){
                char ch = (char)('A'+ind);
                printf("%c",ch);
            }

            for(int i=25; i>=0; i--){
                if(i!=ind){
                    for(int j=0; j<freq[i]/2; j++){
                        char ch = (char)('A'+i);
                        printf("%c",ch);
                    }
                }
            }

            printf("\n");

        }
        else printf("NO SOLUTION\n");
    }

    return 0;
}