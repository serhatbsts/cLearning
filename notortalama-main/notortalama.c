#include <stdio.h>
int main(){
int vizeNotu=0 ;
int finalNotu =0;
printf("Vize Notunuzu Giriniz\n");
scanf("%d", &vizeNotu);
printf("Final Notunuzu Giriniz\n");
scanf("%d", &finalNotu);
double ortalama=0.0;
ortalama=(vizeNotu*0.6)+(finalNotu*0.4);
printf("Ortalamanız:%lf \n",ortalama);
int deger= ortalama/10;

if (ortalama == 100) {
           deger  = 9;
        }
        switch (deger) {
            case 9:
                printf("Notunuz AA");
                break;
            case 8:
                printf("Notunuz BA");
                break;
            case 7:
                printf("Notunuz BB");
                break;
            case 6:
                printf("Notunuz CB");
                break;
            case 5:
                printf("Notunuz CC");
                break;
            default:
                printf("Notunuz CC'den düşük");
        }



return 0;
}