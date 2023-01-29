#include <stdio.h>
int main(){
int n;
float sonuc;
printf("Bir Değer Giriniz\n");
scanf("%d",&n);

for(int k=1;k<=n;k++){
    
    sonuc+=(k+1.0)/k;
    }
        printf("%f\n",sonuc);

    return 0; 
}