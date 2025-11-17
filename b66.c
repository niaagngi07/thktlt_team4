#include <stdio.h> 
#define db double

db a[1000001];

void nhap(db a[], int *n){
    for (int i=0; i<*n; i++){
        scanf ("%lf", &a[i]);
    }
}

void xuat(db a[], int n){
    for (int i=0; i<n; i++){
        printf ("%g ", a[i]);
    } printf ("\n");
}

void soam(db a[], int *n){
    for (int i=0; i<*n; i++){
        if (a[i]<0){
            for (int k=i; k<*n; k++){
                a[k]=a[k+1];
            } (*n)--;
            i--;
        }
    }
}

int main(){
    int n;
    printf ("Nhap so luong phan tu cua mang A:\n");
    scanf ("%d", &n);
    printf ("Nhap mang A:\n");
    nhap(a,&n);
    printf ("Mang A co gia tri:\n");
    xuat(a,n);
    soam(a,&n);
    printf ("Mang A sau khi loai bo so am:\n");
    xuat (a,n);
}