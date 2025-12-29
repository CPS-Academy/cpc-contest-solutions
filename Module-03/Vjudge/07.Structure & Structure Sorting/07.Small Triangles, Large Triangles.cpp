// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct triangle
// {
//     int a;
//     int b;
//     int c;
// };

// typedef struct triangle triangle;
// int area(int a,int b,int c){
//     int p=(a+b+c);
//     return p*(p-2*a)*(p-2*b)*(p-2*c);
// }

// // Comparison function for qsort
// int cmp(const void *a, const void *b) {
//     struct triangle *t1 = (struct info *)a;
//     struct triangle *t2 = (struct info *)b;
//     int area1=area(t1->a,t1->b,t1->c);
//     int area2=area(t2->a,t2->b,t2->c);
//     if(area1<area2)return -1;
//     return 1;
// }


// void sort_by_area(triangle* tr, int n) {
//     qsort(tr,n,sizeof(triangle),cmp);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     triangle *tr = malloc(n * sizeof(triangle));
//     for (int i = 0; i < n; i++) {
//         scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
//     }
//     sort_by_area(tr, n);
//     for (int i = 0; i < n; i++) {
//         printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

/* Returns squared area using Heron's formula */
long long area(triangle t) {
    long long s = (t.a + t.b + t.c) / 2;
    return s * (s - t.a) * (s - t.b) * (s - t.c);
}

/* qsort comparison function */
int cmp(const void *x, const void *y) {
    const triangle *t1 = (const triangle *)x;
    const triangle *t2 = (const triangle *)y;

    long long area1 = area(*t1);
    long long area2 = area(*t2);

    if (area1 < area2) return -1;
    if (area1 > area2) return 1;
    return 0;
}

void sort_by_area(triangle *tr, int n) {
    qsort(tr, n, sizeof(triangle), cmp);
}

int main() {
    int n;
    scanf("%d", &n);

    /* Cast malloc because file is compiled as C++ */
    triangle *tr = (triangle *)malloc(n * sizeof(triangle));
    if (tr == NULL) return 1;

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
    }

    sort_by_area(tr, n);

    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }

    free(tr);
    return 0;
}
