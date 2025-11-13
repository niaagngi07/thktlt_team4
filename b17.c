#include <stdio.h>
#define db double

db max3(db x, db y, db z ){
    db max=x;
    if (y>max) max=y;
    if (z>max) max=z;
    return max;
}
db min3(db x, db y, db z){
    db min=x;
    if (y<min) min=y;
    if (z<min) min=z;
    return min;
}
db min2(db x, db y){
    return (x<y) ? x : y;
}
db minb(db x, db y, db z){
    db sum= x+y+z;
    db multi= x*y*z;
    return min2(sum,multi);
}
db minc(db x, db y, db z){
    db sum2= x+y+z/2;
    db multi= x*y*z;
    return min2(sum2,multi);
}
int main(){
    db x, y, z;
    scanf ("%lf %lf %lf", &x, &y, &z);
    printf ("%lf %lf\n", max3(x,y,z), min3(x,y,z));
    printf ("%lf\n", minb(x,y,z));
    printf ("%lf\n", minc(x,y,z)*minc(x,y,z) +1);
}



