#include <stdio.h>
int main(){
int boy;
double kilo;
printf("Kilonuzu yazınız\n");
scanf("%lf",&kilo);
printf("boyunuzu yazınız\n");
scanf("%d",&boy);

double boyKare=boy*boy;
double endeks= 0;
endeks=kilo/boyKare;
 if (endeks<15){
            printf("Çok Ciddi Derecede Düşük Kilolu Kişi");
        }else if (16>endeks &&endeks>15){
            printf("Ciddi Derecede Düşük Kilolu Kişi");
        }else if (18.5>endeks&&endeks>16){
            printf("Düşük Kilolu Kişi");
        }else if (25>endeks&&endeks>18.5){
            printf("Normal (sağlıklı) Kişi");
        }else if (30>endeks&&endeks>25){
          printf("Fazla Kilolu Kişi");
        }else if (35>endeks&&endeks>30){
            printf("Hafif Obez Kişi");
        }else if (40>endeks&&endeks>35){
           printf("Ciddi Obez Kişi");
        }else if (40>endeks){
           printf("Çok Ciddi Obez Kişi");
        }
return 0;
}