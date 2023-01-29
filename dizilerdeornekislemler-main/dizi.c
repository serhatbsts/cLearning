#include <stdio.h>
//dizi oluşturma ve ortalama değer bulma
int main(){
int dizi[5];
int toplam=0;
for(int i=0;i<5;i++){

    printf("%d Sayı giriniz\n",(i+1));
    scanf("%d",&dizi[i]);
    toplam+=dizi[i];

}
printf("toplam= %d ",toplam);
float ort=toplam/5.0;
printf("Ortalama %f\n",ort);


//Paramerenin dizide kaç kez geçtiği
int deger;
int sayac=0;
printf("Hangi değerin kaç girildiğini öğrenmek istiyorsanız giriiniz:\n");
scanf("%d",&deger);
for(int i=0;i<5;i++){
if(deger==dizi[i]){
sayac++;
}
}
printf("girdiğiniz değer dizide %d kere yazılmıştır\n",sayac);


//Dizideki En Büyük Değer
int buyuk;
buyuk=dizi[0];
for(int i=0;i<5;i++){
    if(dizi[i]>buyuk){
    buyuk=dizi[i];
    }
    }

printf("en büyük değer :%d\n ",buyuk);

//Dizideki En Küçük Değer
int kucuk;
kucuk=dizi[0];
for(int i=0;i<5;i++){
    if(dizi[i]<kucuk){
    kucuk=dizi[i];
    }
    }

printf("en küçük değer :%d\n ",kucuk);

//Dizideki İkinci Büyük Değer

int ikincibuyuk;
buyuk=ikincibuyuk=kucuk;
for(int i=0;i<5;i++){
if(dizi[i]>buyuk){
    ikincibuyuk=buyuk;
    buyuk=dizi[i];
}else if(dizi[i]>ikincibuyuk&&dizi[i]<buyuk){
    ikincibuyuk=dizi[i];
}
}
printf("İkinci En Büyük Sayı %d \n",ikincibuyuk);


//Dizideki Ortalamadan Büyük Olan Değerlerin Sayısı 
int ortbuyukler=0;
for(int i=0;i<5;i++){
    if(dizi[i]>ort)
    ortbuyukler++;
}
printf(" ortalama değerden büyük olan sayıların adedi :%d\n ",ortbuyukler);

//Dizideki Ortalama Değerden Küçük Olan Değerlerin satısı
int ortkucukler=0;
for(int i=0;i<5;i++){
    if(dizi[i]<ort)
    ortkucukler++;
}
printf(" ortalama değerden küçük olan sayıların adedi :%d\n ",ortkucukler);


//girilen parametreden daha büyük olan sayıları toplamı
int a;
int sayidanbuyukdegerlerintoplami=0;
printf("Bir sayı giriniz \n");
scanf("%d",&a);
for(int i=0;i<5;i++){
if(dizi[i]>a){
sayidanbuyukdegerlerintoplami+=dizi[i];
}
}
printf("girilen parametreden daha büyük olan sayıları toplamı %d\n",sayidanbuyukdegerlerintoplami);


//girilen parametreden daha küçük olan sayıları toplamı
int b;
int sayidankucukdegerlerintoplami=0;
printf("Bir sayı giriniz \n");
scanf("%d",&b);
for(int i=0;i<5;i++){
if(dizi[i]<b){
sayidankucukdegerlerintoplami+=dizi[i];
}
}
printf("girilen parametreden daha küçük olan sayıları toplamı %d\n",sayidankucukdegerlerintoplami);
}




