#include <stdio.h>
int main (){
    float dizi[5];
    float gecici;
    for (int i=0;i<5;i++){
    printf ("Dizinin %d. degerini giriniz.\n", i+1);
    scanf ("%f", &dizi[i]);
    }
    printf ("\nDizinin kucukten buyuge siralanmis hali\n");
    for (int i=0; i<4;i++){
        for (int j=i+1;j<5;j++){
            if(dizi[j]<dizi[i]){
                gecici = dizi[i];
                dizi [i]= dizi[j];
                dizi [j]=gecici;
            }
        }
    }
    for (int i=0;i<5;i++){
        printf ("%f\t",dizi[i]);
    }
}