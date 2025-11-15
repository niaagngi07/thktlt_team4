#include <stdio.h>
#define db double

void ca(db a, int n){
    db vl=1;
    for (int i=0; i<n; i++){
        vl *=a;
    } printf ("%g\n", vl);
}

void cb(db a, int n){
    db mtp=1;
    for (int i=1; i<=n; i++){
        mtp*= (a+i-1);
    } printf ("%g\n", mtp);
}

void cc(db a, int n){
    db sum=0;
    db vl=1;
    for (int i=0; i<=n; i++){
        vl *= (a+i);
        sum += 1/vl;
    } printf ("%g\n", sum);
}

int main(){
    db a;
    int n;
    printf ("Nhap so thuc a va so tu nhien n\n");
    scanf ("%Lf %u", &a, &n);
    ca(a,n);
    cb(a,n);
    cc(a,n);
}