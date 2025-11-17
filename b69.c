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

void chisok(db a[], int *n, int k){
    for (int i=0; i<*n; i++){
        if (a[i]==k){
            for (int j=i; j<*n; j++){
                a[j]=a[j+1];
            } (*n)--;
            i--;
        }
    }
}

int main(){
    int n,k;
    printf ("Nhap so luong phan tu cua mang A:\n");
    scanf ("%d", &n);
    printf ("Nhap so nguyen k:\n");
    scanf ("%d", &k);
    printf ("Nhap mang A:\n");
    nhap(a,&n);
    printf ("Mang A co gia tri:\n");
    xuat(a,n);
    chisok(a,&n,k);
    printf ("Mang A sau khi loai bo chi so k:\n");
    xuat (a,n);
}