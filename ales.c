#include <stdio.h>
int main (){
    float ales, yds, mezort;
    float sonuc=0.0;
    printf ("ales notunuzu 100 uzerinden giriniz\n");
    scanf ("%f", &ales);
    printf("yds notunuzu 100 uzerinden giriniz\n");
    scanf ("%f", &yds);
    printf ("mezuniyet not ortalamanızı 100 uzerinden giriniz\n");
    scanf ("%f", &mezort);
    sonuc = (ales/2) + (yds/4) + (mezort/4);
    if ( yds<70){
    printf ("yds notunuz yetersiz oldugu için elendiniz\n");
    }
    if (ales<55){
    printf ("ales notunuz yüzünden kabul edilmediniz.\n");
    }
    if(mezort < 50){
    printf ("mezuniyet notunuz yüzünden kabul edilmediniz.\n");
    }
     if (yds>=70 && ales>=55 && mezort>=50 && sonuc>=60){
        printf ("Tebrikler, lisanüstü programına kabul edildiniz.\n");
        printf ("%f", sonuc);
    }
    return 0;
}