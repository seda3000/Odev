#include <stdio.h>
int main (){
    int vize[5];
    int final[5];
    int ort [5];
    for (int i=0; i<5;i++){
        printf ("%d. ogrencinin vize notunu giriniz\n ",i+1 );
        scanf ("%d",&vize[i]);
    }
    for (int i=0;i<5;i++){
        printf ("%d. ogrencinin final notunu giriniz\n ",i+1 );
        scanf ("%d",&final[i]);
    }
    for (int i=0; i<5; i++){
       ort[i]= (0.4*final[i]+0.6*vize[i]);
    }
    for (int i=0;i<5;i++){
        printf ("%d. ogrencinin ortalamasi %d\n",i+1,ort[i]);
    }

}
