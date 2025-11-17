#include <stdio.h>
#define db double

db a[100][100];

void nhap(db a[][100], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf ("%lf", &a[i][j]);
        }
    }
}

void xuat(db a[][100], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf ("%g ", a[i][j]);
        } printf ("\n");
    }
}

void swap (db *a, db *b){
    db tmp= *a;
    *a = *b;
    *b = tmp;
}

void maxphu(db a[][100], int n){
    db sum=0;
    for (int i=0; i<n; i++){
        db maxvl = a[i][0];
        int max = 0;
        for (int j=1; j<n; j++){
            if (a[i][j]> maxvl){
                maxvl = a[i][j];
                max = j;
            }
        } sum += maxvl;
        int phu = n - i - 1;
        if (max != phu) swap (&a[i][max], &a[i][phu]);
    } printf ("%g\n", sum);
}

int main(){
    int n;
    printf ("Nhap kich thuong nxn cua ma tran:\n");
    scanf ("%d", &n);
    printf ("Nhap cac gia tri cua ma tran:\n");
    nhap(a,n);
    printf ("Ma tran vua nhap la:\n");
    xuat(a,n);
    printf ("Tong max tren duong cheo phu la:\n");
    maxphu(a,n);
    printf ("Ma tran sau khi hoan vi max len duong cheo phu la:\n");
    xuat(a,n);
}