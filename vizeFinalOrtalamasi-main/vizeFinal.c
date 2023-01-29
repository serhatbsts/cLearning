#include<stdio.h>

void sinavOrtalamasi(int dizi1[],int dizi2[],int dizi3[],int a){
    for(int i=0;i<a;i++){
    dizi3[i]=(dizi1[i]*0.4)+(dizi2[i]*0.6);
    }
}
void degerlerinEkranaYazdirilmasi(int dizi1[],int dizi2[],int dizi3[],int a){
    for(int i=0;i<a;i++){
        printf("%d. Öğrencinin Vize Notu : %d, Final Notu : %d, Ortalaması : %d ",(i+1),dizi1[i],dizi2[i],dizi3[i]);
        if(dizi3[i]<50){
            printf(" Öğrenci Dersten Kaldı !!!!\n");
        }else{
            printf(" Öğrenci Dersi Geçti Tebrikler\n");
        }
    }
}

int main(){
int vize[5],final[5],ort[5];
for(int i=0;i<5;i++){
    printf("%d. Öğrencinin Vize Notu: ",(i+1));
    scanf("%d",&vize[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d. Öğrencinin Final Notu: ",(i+1));
        scanf("%d",&final[i]);
}
sinavOrtalamasi(vize,final,ort,5);
degerlerinEkranaYazdirilmasi(vize,final,ort,5);

    }

