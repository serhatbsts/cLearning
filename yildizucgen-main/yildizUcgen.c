#include <stdio.h>
int main(){

    int a,b,c;
    int sira;
    printf("Sıra Sayısını Giriniz\n");
    scanf("%d", &sira);
    int yildiz=1;
    int bosluk;
    bosluk=sira-1;
   for(a=0;a<sira;a++){
    for(c=0;c<bosluk;c++){
        printf("  ");
    }
    for(b=0;b<yildiz;b++){
          printf("*");
          printf(" ");
    }
    printf("\n");
    yildiz+=2;
    bosluk--;
   }
}