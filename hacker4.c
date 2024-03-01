#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int c;
    c=*b+*a;
    int d;
    d=*b-*a;
    if (d>0) {
    *a=c;
    *b=d;
    }
    else {
        int d;
    d=*a-*b;
     *a=c;
    *b=d;
    }
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
