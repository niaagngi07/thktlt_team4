#include <stdio.h>
#include <string.h>

char a[100];

void checkdx(char a[]){
    int num= strlen(a);
    int check =1;
        for (int i=0; i<num/2; i++){
            if (a[i]!=a[num-i-1]){
            check =0;
            break;
        }
    } if (check == 1) printf ("Doi xung");
    else printf ("Khong doi xung");
}

int main(){
    scanf ("%s",a);
    checkdx(a);

}