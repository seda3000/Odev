#include <stdio.h>
int main (){
    int n,k,y,b;
    printf ("n sayisiniz giriniz\n");
    scanf ("%d", &n);
    for (k=1;k<=n;k++){
        b=n-k;
        for (b;b>=0;b--){

        printf(" ");
        }

        for(y=1;y<=(2*k-1);y++){
             printf ("*");
        }
        printf("\n");
        
      }
      return 0;
    }