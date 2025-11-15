#include <stdio.h>
#define db double
db a[100];

void nhap(db a[]){
    for (int i=0; i<3; i++){
        scanf ("%lf", &a[i]);
    }
}

void check(db a[]){
    for (int i=0; i<3; i++){
        if (a[i]>3 && a[i]<5) printf ("%g ", a[i]);
    }
}

int main(){
    printf ("Nhap x, y, z\n");
    nhap(a);
    printf ("Nhung so nam trong khoang (3,5) la:\n");
    check(a);
}