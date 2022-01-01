#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tas_kagit_makas_oyunu();
void skor_gecmisi(int x[],int y[],int k);

int main()
{
    printf("******TAS-KAGIT-MAKAS OYUNUNA HOS GELDINIZ!******\n\n");
    printf("Secim Menusu:\n");
    printf("Tasi secmek icin 1 degerini giriniz.\n");
    printf("Kagidi secmek icin 2 degerini giriniz.\n");
    printf("Makasi secmek icin 3 degerini giriniz.\n\n");

    tas_kagit_makas_oyunu();

    printf("\n\nOynadiginiz icin tesekkurler!");
    return 0;
}

void tas_kagit_makas_oyunu()
{

    int kullanici_degerleri[1000];
    int bilgisayar_degerleri[1000];
    int kullanici_skoru=0;
    int bilgisayar_skoru=0;

    int bilgisayar_secim;
    int k;
    int i=0;

    while(1)
    {
        int kullanici_secim;
            while(1){
                printf("Istediginiz degeri giriniz: ");
                int x;
                scanf("%d",&x);
                kullanici_secim=x;

                if (x==1 || x==2 || x==3)
                    break;
                else
                printf("Yanlis deger girdiniz.\n\n");
            }
        srand(time(0));
        bilgisayar_secim=rand()%3+1;

        kullanici_degerleri[i]=kullanici_secim;
        bilgisayar_degerleri[i]=bilgisayar_secim;
        i++;

            if((kullanici_secim==1 && bilgisayar_secim==1)||(kullanici_secim==2 && bilgisayar_secim==2)||(kullanici_secim==3 && bilgisayar_secim==3))
            {
                printf("Berabere!\nSkor:%d - %d\n\n",kullanici_skoru,bilgisayar_skoru);
            }
            else if((kullanici_secim==1 && bilgisayar_secim==3)||(kullanici_secim==2 && bilgisayar_secim==1)||(kullanici_secim==3 && bilgisayar_secim==2))
            {
                kullanici_skoru++;
                printf("Kullanici Kazandi!\nSkor:%d - %d\n\n",kullanici_skoru,bilgisayar_skoru);
            }
            else
            {
                bilgisayar_skoru++;
                printf("Bilgisayar Kazandi!\nSkor:%d - %d\n\n",kullanici_skoru,bilgisayar_skoru);
            }

            k=i;
            if((kullanici_skoru==5) || (bilgisayar_skoru==5))
                break;
    }

    if(kullanici_skoru==5)
        printf("\n\nOyunu Kullanici Kazandi!\nToplam Skor:%d - %d\n\n\n",kullanici_skoru,bilgisayar_skoru);

    else if(bilgisayar_skoru==5)
        printf("\n\nOyunu Bilgisayar Kazandi!\nToplam Skor:%d - %d\n\n\n",kullanici_skoru,bilgisayar_skoru);


    skor_gecmisi(kullanici_degerleri,bilgisayar_degerleri,k);
}


void skor_gecmisi(int x[],int y[],int k){

    printf("Skor Gecmisi:\n");
        for(int j=0;j!=k;j++)
            printf("%d - %d\n",x[j],y[j]);
}



