#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
        FILE *dosya;

int main()
{

   fflush(stdin);
    printf("***********Film Onerme Arayuzune Hosgeldiniz***************\n\n");
     int a;
    printf("1-Film Ekle:\n");
    printf("2-Film Izle:\n");
    printf("Cikis Icin 0 a Basiniz\n");
    fflush(stdin);
    scanf("%d",&a);
   
  printf("\n\n");
  
     switch(a)//ana menüdeki seçenekleri seçmek için kullanılır
     {
    case 1:
    filmEkleme();
        break;
    case 2:
    filmIzle();
        break;
    case 0:
         break;
    default :
    printf("Gecerli Bir Sayi Giriniz\n");
        break;
    }
  }

int rastgeleKatagori()
{
    srand(time(NULL));//rastgele sayı atarken her seferde farklı bir sayı atamasını sağlar
    int a;

a=1+rand()%7;
switch (a)//film katagorisi seçmek için kullanılır
    {
    case 1:
    komedi();
        break;
    case 2:
    korku();
        break;
    case 3:
    romantik();
        break;
    case 4:
    gerilim();
        break;
    case 5:
    aksiyon();
        break;
    case 6:
    bilimKurgu();
        break;
    case 7:
    fantastik();
        break;
}
main();
}
int filmIzle()
{
    printf("***************************\n\n");
   printf("1-Tum Filmler\n");
   printf("2-Tum Kategoriler\n");
printf("\n\n");
   int a;
   scanf("%d",&a);
   switch (a)
   {
case 1: 
tumFilmler();
    break;
case 2: 
tumKatagoriler();
    break;
default: 
printf("Gecerli Bir Deger Giriniz\n ");
    break;
   }

}
int tumKatagoriler()
{
    printf("**********Tum Katagoriler***************");
    printf("1-Komedi Filmleri\n");
    printf("2-Korku Filmleri\n");
    printf("3-Romantik Filmleri\n");
    printf("4-Gerilim Filmleri\n");
    printf("5-Aksiyon Filmleri\n");
    printf("6-Bilim Kurgu Filmleri\n");
    printf("7-Fantastik Filmleri\n");
    printf("8-Rastgele Katagiri Secimi\n");
printf("\n\n");
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    komedi();
        break;
    case 2:
    korku();
        break;
    case 3:
    romantik();
        break;
    case 4:
    gerilim();
        break;
    case 5:
    aksiyon();
        break;
    case 6:
    bilimKurgu();
        break;
    case 7:
    fantastik();
        break;
    case 8:
    rastgeleKatagori();
        break;
    
    default:
    printf("Gecerli Bir Deger Giriniz\n");
    
        break;
    }

}
int komedi()
{
    printf("**********KOMEDI**********\n");
    dosya=fopen("komedifilm.txt","r");//txt dosyasını okuma modunda açar.
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)//dosya boş ise ilk kod çalışır
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {
        do
        {
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
            
                printf(" %s",satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır
    }
    printf("\n\n");
main();
}
int korku()
{
     printf("**********KORKU**********\n");

    dosya=fopen("korkufilm.txt","r");//txt dosyasını okuma açar
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
            
                printf(" %s",satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır
    }
    printf("\n\n");
main();

}
int romantik()
{
     printf("**********ROMANTIK**********\n");
    dosya=fopen("romantikfilm.txt","r");//txt dosyasını okuma modunda açar
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
            
                printf("%s",satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır
    }
    printf("\n\n");
main();

}
int gerilim()
{
     printf("**********GERILIM**********\n");
    dosya=fopen("gerilimfilm.txt","r");//txt dosyasını okuma modunda açar
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
            
                printf(" %s",satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır
    }
    printf("\n\n");
main();

}
int aksiyon()
{
     printf("**********AKSIYON**********\n");
    dosya=fopen("aksiyonfilm.txt","r");//txt dosyasını okuma modunda açar
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
            
                printf(" %s",satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır
    }
    printf("\n\n");
main();

}
int bilimKurgu()
{
     printf("**********BILIM KURGU**********\n");
    dosya=fopen("bilimkurgufilm.txt","r");//txt dosyasını okuma modunda açar
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
            
                printf(" %s",satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatırr
    }
    printf("\n\n");
main();

}
int fantastik()
{
     printf("**********FANTASTIK**********\n");
    dosya=fopen("fantastikfilm.txt","r");//txt dosyazını okuma modunda açar
    char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
    }
    else
    {int i=0;
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
                i++;
            
                printf("%d. %s",i,satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır
    }
    printf("\n\n");
main();

}
int tumFilmler()
{
    printf("*******************Tum Filmler***********************");
 dosya=fopen("tumFilm.txt","r");//txt dosyasını okuma modunda açar
   char satir[250],*karakter;//bir satırda max 250 karakter almasını sağlar
    if(dosya==NULL)
    {
        printf("Listede Film Bulunmamaktadir.\n");
        printf("Ana Menuye Yonlendiriliyorsunuz.\n");
    }
    else
    {
        int i=0;
        do{
            karakter=fgets(satir,250,dosya);//txt dossyasındaki yazılıları satır satır okuma ve karakter değişkenine kaydedilmesi görevini yapar.
            if(karakter!=NULL)
            {
                i++;
            
                printf("%d. %s",i,satir);

            }
        }while(karakter!=NULL);
        fclose(dosya);//txt dosyasını kapatır

    }
    printf("\n\n");
    main();
    

}
int filmEkleme()
{
    int a;
    do{
         printf("*****Hangi Katagoride Film Eklemek Isterseniz:*********\n");
    printf("1-Komedi Filmi\n");
    printf("2-Korku Filmi\n");
    printf("3-Romantik Filmi\n");
    printf("4-Gerilim Filmi\n");
    printf("5-Aksiyon Filmi\n");
    printf("6-Bilim Kurgu Filmi\n");
    printf("7-Fantastik Filmi\n");
    printf("8-Ana Menuye Don\n");
    printf("Cikis Icin 0 a Basiniz\n");
    printf("\n\n");
    scanf("%d",&a);

char filmIsmi[50];

switch (a)
{
case 1:
 fflush(stdin);//scanf ten fazla veri alırken hata oluşmamasını sağlıyor
printf("Film ismini giriniz: \n");
gets(filmIsmi);//kullanıcıdan alınan verilerde boşluk var ise kullanılır
dosya=fopen("komedifilm.txt","a");//txt dosyasını kaydetme modunda açar
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;
case 2:
 fflush(stdin);
printf("Film ismini giriniz: \n");
gets(filmIsmi);
dosya=fopen("korkufilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;
case 3:
 fflush(stdin);
printf("Film ismini giriniz: \n");
gets(filmIsmi);
dosya=fopen("romantikfilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;
case 4:
 fflush(stdin);
printf("Film ismini giriniz: \n");
gets(filmIsmi);
dosya=fopen("gerilimfilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;
case 5:
 fflush(stdin);
printf("Film ismini giriniz: \n");
gets(filmIsmi);
dosya=fopen("aksiyonfilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;
case 6:
 fflush(stdin);
printf("Film ismini giriniz: \n");
gets(filmIsmi);
dosya=fopen("bilimkurgufilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;
case 7:
 fflush(stdin);
printf("Film ismini giriniz: \n");
gets(filmIsmi);
dosya=fopen("fantastikfilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
dosya=fopen("tumFilm.txt","a");
fprintf(dosya,"%s\n",filmIsmi);
fclose(dosya);
printf("\n\n");
    break;

    }
    }while(a!=0&&a!=8);
    if(a==8){
        main();
    }
     printf("\n\n");
    fflush(stdin);

}



