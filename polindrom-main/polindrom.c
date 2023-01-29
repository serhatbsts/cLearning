#include <stdio.h>
int main(){
int sayi;
printf("5 BEŞ BASAMAKLI BİR SAYI GİRİNİZ\n");
scanf("%d",&sayi);                 //buna bak incele

int  a= (sayi%10);
printf("birler :%d\n",a);

int b =(sayi%100 -a)/10;
printf("onlar :%d\n",b);

int c=(sayi%1000);

int d =(sayi%10000-c)/1000;
printf("binler :%d\n",d);
int e=(sayi/10000);
printf("onbinler :%d\n",e);

if(a==e&&b==d){

    printf("SAYI POLİNDROME SAYI");
}else{
    printf("SAYI POLİNDROME SAYI DEĞİL");


}


return 0;
}