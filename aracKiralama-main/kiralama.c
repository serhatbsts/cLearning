#include <stdio.h>
int main(){
    int gun,km,ucret;
    printf("Araç türünü giriniz (arazi için a\n binek için b\n station için s\n spor için p\n)");
    char arac;
    scanf("%c", &arac);
    printf("kullandığınız gün sayısını giriniz\n");
    scanf("%d", &gun);
    printf("kullandığınız km sayısını giriniz\n");
    scanf("%d", &km);
    switch (arac)
    {
    case 'a':
    case 'A':
    ucret= (km*18)+(gun*20);
    break;
    case 'b':
    case 'B':
    ucret= (km*22)+(gun*32);
    break;
    case 'c':
    case 'C':
    ucret= (km*28)+(gun*43);
    break;
    case 'p':
    case 'P':
    ucret= (km*36)+(gun*51);
    
    break;
  
    }
    printf("ücretiniz:%d",ucret);
    
    


}