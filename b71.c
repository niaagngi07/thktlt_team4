#include <stdio.h>
#include <math.h>
#define size 1000000
#define db double
db a[size];
db b[size];

void nhap(db a[], int n){
   for (int i=0; i<n; i++){
    scanf ("%lf", &a[i]);
   }
}

void in(db a[], int n){
    for (int i=0; i<n; i++){
        printf ("%g ", a[i]);
    }  printf ("\n");
}

void ghep(db a[], db b[], int m, int n){
    for (int i=0; i<n; i++){
        a[m+i]=b[i];
    }
}


void swap(db *a, db *b) {
    db tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(db a[], int n) {
    for (int i = 0; i < n - 1; i++){
        int max = i;
        db tmp = a[i];  
        for (int j = i + 1; j < n; j++){
            if (a[j] > tmp){
                tmp = a[j];
                max = j;
            }
        }
        if (max != i){
            swap(&a[i], &a[max]);
        }
    }
}

int main(){
    int m, n;
    scanf ("%d %d", &m, &n);

    printf ("Nhap vao mang A:\n");
    nhap(a,m);
    printf ("Mang A la:\n");
    in(a,m);

    printf ("Nhap vao mang B:\n");
    nhap(b,n);
    printf ("Mang B la:\n");
    in(b,n);

    ghep(a,b,m,n);
    sort(a,m+n);

    printf ("Sau khi ghep mang voi gia tri giam dan la:\n");
    in(a,m+n);
}