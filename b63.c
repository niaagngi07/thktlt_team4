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
                    sum+=vl;
            }
        }
    } printf ("%d", sum);
}
int main(){
    int n; scanf ("%d", &n);
    printf ("Hay nhap mang A:\n");
    nhap(a,n);
    printf ("Mang A la:\n");
    in(a,n);
    printf ("\nCac so chinh phuong co trong mang A la: ");
    chinhphuong(a,n);
}
