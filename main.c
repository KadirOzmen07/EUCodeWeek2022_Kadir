#include <stdio.h>
    #include <math.h>

int main()
{
       int sayi;
    printf("armstrong sayi bulma!!!\n");
    printf("Bir Sayi Giriniz:",sayi);
    scanf("%d",&sayi);

    int gecicisayi;
    gecicisayi=sayi;
    int basamak=0;

    while(gecicisayi)
    {
     basamak++;
     gecicisayi/=10;
    }
     gecicisayi=sayi;
     int gecicisayi2;
     gecicisayi2=gecicisayi;
     int toplam=0;
     int usler;
     usler=basamak-1;
     for(usler;usler>=0;usler--)
     {
       gecicisayi=gecicisayi2/pow(10,usler);
       toplam+=pow(gecicisayi,basamak);
       gecicisayi2=gecicisayi2-(gecicisayi*pow(10,usler));
       gecicisayi=gecicisayi2;}
       if(toplam==sayi)
        printf("Armstrong sayýdýr")
        else
        printf("armstrong sayý deðildir")
    return 0;
}


