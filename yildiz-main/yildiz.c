#include <stdio.h>
int main(){

    int a,b;
    int sira;
    printf("Sıra Sayısını Giriniz\n");
    scanf("%d", &sira);
    int yildiz=1;

   for(a=0;a<sira;a++){
    for(b=0;b<yildiz;b++){

          printf("*");
    }
    printf("\n");
    yildiz++;




   }
}