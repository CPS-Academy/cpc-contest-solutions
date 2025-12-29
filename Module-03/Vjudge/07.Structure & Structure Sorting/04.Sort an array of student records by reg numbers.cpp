#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info
{
    char reg[15];
    char name[25];
    float cgpa;
};

// Comparison function for qsort
int cmp(const void *a, const void *b) {
    struct info *s1 = (struct info *)a;
    struct info *s2 = (struct info *)b;
    int tmp=strcmp(s1->reg,s2->reg);
    return tmp;
}

int main() {
    int n;
    scanf("%d",&n);
    struct info stud[n];
    for(int i=0;i<n;i++){
        scanf("%s%s%f",stud[i].reg,stud[i].name,&stud[i].cgpa);
    }
    qsort(stud,n,sizeof(struct info),cmp);
    for(int i=0;i<n;i++){
        printf("%s %s %.2f\n",stud[i].reg,stud[i].name,stud[i].cgpa);
    }
}
