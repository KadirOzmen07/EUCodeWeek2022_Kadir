#include <stdio.h>
    #include <math.h>

int main()
{
       int sayi;
    printf("armstrong sayi bulma!!!\n");
    printf("Bir Sayi Giriniz:");
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
     for(int usler=(basamak-1);usler>=0;usler--)
     {
       gecicisayi=gecicisayi2/pow(10,usler);
       toplam+=pow(gecicisayi,basamak);
       gecicisayi2=gecicisayi2-(gecicisayi*pow(10,usler));
       gecicisayi=gecicisayi2;}
       if(toplam==sayi)
        printf("Armstrong sayıdır");
        else
        printf("armstrong sayı değildir");
    return 0;
}


