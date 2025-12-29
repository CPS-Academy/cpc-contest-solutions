#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info
{
    char reg[15];
    char name[25];
    float cgpa;
    int ind;
};

// Comparison function for qsort
int cmp(const void *a, const void *b) {
    struct info *s1 = (struct info *)a;
    struct info *s2 = (struct info *)b;
    int tmp=strcmp(s1->name,s2->name);
    if(tmp<0)return -1;
    if(tmp>0)return 1;
    if(s1->ind<s2->ind)return -1;
    return 1;
}

int main() {
    int n;
    scanf("%d",&n);
    struct info stud[n];
    for(int i=0;i<n;i++){
        scanf("%s%s%f",stud[i].reg,stud[i].name,&stud[i].cgpa);
        stud[i].ind=i;
    }
    qsort(stud,n,sizeof(struct info),cmp);
    for(int i=0;i<n;i++){
        printf("%s %s %.2f\n",stud[i].reg,stud[i].name,stud[i].cgpa);
    }
}
