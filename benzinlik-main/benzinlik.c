#include <stdio.h>
int main(){
    /*reno 1
    mazda 2
    honda 3
    ford 4
    
    */
   int arac;

    int renoTutar;
    int mazdaTutar;
    int hondaTutar;
    int fordTutar;

do{
    printf("araç kodunu giriniz");
    scanf("%d", &arac);

switch(arac){
    case 1:
    printf("Reno Araç Tutar\n");
    scanf("%d", &renoTutar);
    break;
    case 2:
    printf("mazda Araç Tutar\n");
    scanf("%d", &mazdaTutar);
    break;
    case 3:
    printf("Honda Araç Tutar\n");
    scanf("%d", &hondaTutar);
    break;
    case 4:
    printf("Ford Araç Tutar\n");
    scanf("%d", &fordTutar);
    break;
}
}while (arac!=111);



if(renoTutar<mazdaTutar&&hondaTutar<mazdaTutar&&fordTutar<mazdaTutar){
    printf("En Çok Alışveriş Yapan Araç Mazda :\n %d" ,mazdaTutar);

}else if(mazdaTutar<renoTutar&&hondaTutar<renoTutar&&fordTutar<renoTutar){

printf("En Çok Alışveriş Yapan Araç Reno  :\n %d" ,renoTutar);
}else if(mazdaTutar<hondaTutar&&hondaTutar>renoTutar&&fordTutar<hondaTutar){

printf("En Çok Alışveriş Yapan Araç Honda  :\n %d" ,hondaTutar);


}else if(mazdaTutar<fordTutar&&fordTutar>renoTutar&&fordTutar>hondaTutar){

printf("En Çok Alışveriş Yapan Araç Ford  :\n %d" ,fordTutar);

}
}

