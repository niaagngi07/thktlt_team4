#include <stdio.h>

int a[1000001];

void nhap(int a[], int *n){
    for (int i=0; i<*n; i++){
        scanf ("%d", &a[i]);
    }
}

void in(int a[], int n){
    for (int i=0; i<n; i++){
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

void hoanhao(int a[], int *n){
    for (int i=0; i<*n; i++){
        int sum =0;
        for (int j=1; j<=a[i]/2; j++){
            if (a[i]%j==0) sum += j;
        } if (sum==a[i] && a[i]!=0){
            for (int k=i; k<(*n)-1; k++){
                a[k]= a[k+1];
            }
            (*n)--;
            i--;
        }
    }
}

int main(){
    int n;
    printf ("Nhap so phan tu cua mang:\n");
    scanf ("%d", &n);
    printf ("Nhap mang:\n");
    nhap(a,&n);
    printf ("Mang sau khi nhap la:\n");
    in(a,n);
    hoanhao(a,&n);
    printf ("Mang sau khi loai bo cac so hoan hao:\n");
    in(a,n);
}