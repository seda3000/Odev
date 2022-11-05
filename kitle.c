#include <stdio.h>
int main (){
    float boy, kilo, sonuc ;
    printf("kilonuzu kilogram cinsinden giriniz\n");
    scanf ("%f", &kilo);
    printf ("boyunuzu metre cinsinden giriniz\n");
    scanf ("%f",&boy );
    boy = boy*boy;
    sonuc = kilo/boy;
    if (sonuc<18.5){
    printf ("%f,ideal kilonun altında",sonuc);
    }
    if (18.5<=sonuc<=24.9){
    printf ("sonuc, normal");
    }
    if (24.9<sonuc<=29.9){
    printf("ideal kilonun ustunde");
    }
    if (29.9<sonuc<=39.9){
    printf("ideal kilonun cok ustunde");
    }
    if(39.9<sonuc){
    printf ("obez");
    }
    return 0 ;

}