#include <stdio.h>
#include <math.h>

int t[10],i,k,secim,ust,yuzdebasari,l;
float yukseknot,kucuknot,genelort,standart,spm;

struct  ogrenci {

int vize1[10],vize2[10],final[10];
char isim[10][10];
char soyisim[10][10];
float ort[10] ;

	} ogrenci;
//standart sapma hesaplayan fonksiyon//
	double std(float g[],int f,int c)
	{
		int toplam=0;

		for(i=0;i<c;i++)
		{
			toplam+=pow((g[i]-genelort),2);
		}
		spm=sqrt(toplam/(c-1));
		return spm;

	}


//sinif ortlamasini bulan fonksiyon//
float ortalama(float o[],int a)
{
	int ort=0,toplam=0;

	for(i=0;i<a;i++)
	{
		toplam+=o[i];
	}
	ort=toplam/a;

	return ort;
}

//en kucuk notu hesaplayan fonksiyon//
float enkucuk(float o[],float kucuknot)
{
	kucuknot=o[0];
	for(i=0;i<kucuknot;i++)
	{
		if(o[i]<kucuknot) kucuknot=o[i];
	}
	return kucuknot;
}

//en buyuk notu hesaplayan fonksiyon//
float enyuksek(float o[] ,float d)
			{

	float f= o[0];
	for(i=0;i<k;i++)
	{
		if(o[i]<d)
		d=o[i];
	}
	return d;

}

//ortalama ustundeki ogrenci sayisini  bulan fonksiyon//
int ortustu(float c[],float a , int b)
	{int s=0;
	for(i=0;i<b;i++)
	{ if (c[i]>a)
	s++; } return s; }

//kayit ekleme fonksiyonu //
void ekle()
{

  printf("\n\n\t---Kayit Ekle---");



      printf("\nIsminizi giriniz :") ;
      scanf("%s",ogrenci.isim[i]);
      printf("\n Soyisminizi giriniz :");
      scanf("%s",ogrenci.soyisim[i]);
      printf("\nVize 1 notunu giriniz :");
      scanf("%d",&ogrenci.vize1[i]);
      printf("Vize 2 notunu giriniz :");
      scanf("%d",&ogrenci.vize2[i]);
      printf("Final notunu giriniz :");
		scanf("%d",&ogrenci.final[i]);


		i++ ;




  }
	float yuvarlaort(float t[],int i)
	{
		int temp;
		temp=(t[i]-floor(t[i]))*10;

		if(temp>=5) t[i]=ceil(t[i]);

		else t[i]=floor(t[i]);

		return t[i];
	}

//ogrencilerin basari notunu hesaplayan fonksiyon//
float ort_hesapla()

	{
		for(i=0 ;i < 3;i++)
		ogrenci.ort[i]=(ogrenci.vize1[i]*0.2)+(ogrenci.vize2[i]*0.3)+(ogrenci.final[i]*0.5);
		ogrenci.ort[i]=yuvarlaort(ogrenci.ort,i);


	 }

		//kayitlari basari notuna gore siralayan fonksiyon//
		void siraliListe()
		{

	for(i=0;i<3;i++)
	{
			l=2-i;
		int b=ogrenci.ort[l];

		if(kucuknot<ogrenci.ort[i])
			{t[l]=i;}
		else if(ogrenci.ort[l]<ogrenci.ort[i])
				{t[l]=i;}

			}


	printf("\nAD\t\tSOYAD\tVIZE1\tVIZE2\tFINAL\tNOTU\tHARF\tDURUM\n");

	for(l=0;l<3;l++)


		{

					printf("%s\t\t%1.s\t%d\t%d\t%d\t%2.f",ogrenci.isim[(t[l])],ogrenci.soyisim[(t[l])],ogrenci.vize1[(t[l])],ogrenci.vize2[(t[l])],ogrenci.final[(t[l])],ogrenci.ort[(t[l])]);
					if(ogrenci.ort[(t[l])]>=90) printf("AA\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=85) printf("BA\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=80) printf("BB\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=75) printf("CB\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=70) printf("CC\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=65) printf("DC\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=60) printf("DD\tGecti \n");
					else if(ogrenci.ort[(t[l])]>=50) printf("FD\tSartli Gecti \n");
					else printf("FF\tKaldi \n");


		}


	}


//kayitlari listeleyen fonksiyon//
void listele()
{
  printf("\nAD\t\tSOYAD\t\tVIZE1\t\tVIZE2\t\tFINAL\tNOTU\tHARF\tDURUM\n");

  for(i=0 ; i<3  ; i++)
	{printf("%s\t\t%1.s\t\t%d\t\t%d\t\t%d\t\t%2.f",ogrenci.isim[i],ogrenci.soyisim[i],ogrenci.vize1[i],ogrenci.vize2[i],ogrenci.final[i],ogrenci.ort[i]);
	if(ogrenci.ort[i]>=90) printf("AA\tGecti \n");
	else if(ogrenci.ort[i]>=85) printf("BA\tGecti \n");
	else if(ogrenci.ort[i]>=80) printf("BB\tGecti \n");
	else if(ogrenci.ort[i]>=75) printf("CB\tGecti \n");
	else if(ogrenci.ort[i]>=70) printf("CC\tGecti \n");
	else if(ogrenci.ort[i]>=65) printf("DC\tGecti \n");
	else if(ogrenci.ort[i]>=60) printf("DD\tGecti \n");
	else if(ogrenci.ort[i]>=50) printf("FD\tSartli Gecti \n");
	else printf("FF\tKaldi \n");


} }

//menu fonksiyonu//
void menu()
{
  printf("\n\n\tMENU\n");
  printf("\n[1] Kayit Ekle");
  printf("\n[2] Kayitlari Listele");
  printf("\n[3] Sinif Basari Notlarini Hesapla");
  printf("\n[4] Kayitlari Basari Notuna Gore Hesapla");
  printf("\n[5] Istatistik Bilgiler");
  printf("\n[6] Cikis");
  printf("\n\n Bir islem seciniz : ");
}

int main ()
	{
		int k=0 ;
		while(1)
		{

			menu();
				scanf("%d",&secim);





{
			if (secim==1)
		{		if(k==10)
				{
					printf("Sinif mevcudu dolu");
					break;
				}
				else
				{
					 ekle() ;

						k++;

			}
}

	 if (secim==2)

		{

		listele();
				}

		if (secim == 3 )
		{		if (k == 0)
			{	printf("Kisi Eklemeden Basari Notu Hesapnalanamaz!!!\n");
				printf("***KAYIT EKRANINDAN KAYIT EKLEYINIZ***");}

				else
					{ort_hesapla();}


				}


	 if (secim==4)
					{
							siraliListe();}




	 if (secim==5)
{				ust=ortustu(ogrenci.ort,ortalama(ogrenci.ort,k) , k);
				yuzdebasari=((ust*100)/k);
				standart=ortalama(ogrenci.ort,k);
				printf("---Istatiski Bilgiler---\nEn Yuksek Not : %.2f\nEn Dusuk Not : %.2f\nOrtalama:%.2f\n Ortalama Ustu Kısı Sayısı :%d > Basari Orani:%%%d\nStandart Sapma:%f",enyuksek(ogrenci.ort,k),enkucuk(ogrenci.ort,k),ortalama(ogrenci.ort,k),ortustu,yuzdebasari,std(ogrenci.ort,standart,k));
}


	 if (secim==6)
			{
					return 0 ;
	 }

}
}

		}
