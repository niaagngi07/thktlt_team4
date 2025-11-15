#include <stdio.h>

int main(){
    long long a, n, d;
    long long sum=0;
    scanf ("%lld %lld %lld", &n, &a, &d);
    if (n<0) return 0;
    for (int i=0; i<n; i++){
        sum+= a+i*d;
    }
    printf ("%lld", sum);
}