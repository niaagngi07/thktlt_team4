#include <stdio.h>
#define uint unsigned int

int main(){
    uint n;
    scanf ("%u", &n);
    int c= n/10;
    int d= n%10;
    if (c*c*c + d*d*d==n*n) printf ("Yes");
    else printf ("No");
}