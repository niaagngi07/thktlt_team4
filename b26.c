#include <stdio.h>
#define db double

db sum1(int a, int n){
    db res=1;
    for (int i=2; i<=n; i+=2){
        res *= (a-i);
    } return res;
}
db sum2(int a, int n){
    db res=1;
    for (int i=1; i<=n; i= i*2 +1){
        res *= (a-i);
    } return res;
}
int main(){
    int x;
    printf ("Nhap x:\n");
    scanf ("%d", &x);
    if (sum2(x,63)!=0) printf ("%lf", sum1(x,64)/sum2(x,63));
    else printf ("Gia tri khong hop le");
}