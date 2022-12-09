#include <stdio.h>
int main (){
    int n, k, a ;
    printf ("n sayisini giriniz\n");
    scanf ("%d",&n);
    for (k=1;k<=n;k++){
        for (a=1;a<=k;a++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
