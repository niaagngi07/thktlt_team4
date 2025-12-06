#include <stdio.h>
#include <math.h>
#define db double

db a[1000001];


void nhap(db a[], int n){
    for (int i=0; i<n; i++){
        scanf ("%lf", &a[i]);
    }
}
void in(db a[], int n){
    for (int i=0; i<n; i++){
        printf ("%g ", a[i]);
    }
}
void chinhphuong(db a[], int n){
        int sum=0;
        for (int i=0; i<n; i++){
            if (a[i] >= 0 && floor(a[i]) == a[i]){ 
                int vl= (int)a[i];
                int tmp=(int)sqrt(vl);
                if (pow(tmp,2)==vl){
                    printf ("%d ", vl);
                    sum+=vl;
            }
        }
    } printf ("\nTong cac so chinh phuong: %d", sum);
}
int main(){
    int n; scanf ("%d", &n);
    printf ("Hay nhap mang A:\n");
    nhap(a,n);
    printf ("Mang A la:\n");
    in(a,n);
    printf ("\n");
    chinhphuong(a,n);
}
