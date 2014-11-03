/*PAU Özgür Yazılım Topluluğunun git &amp; Github eğitimi Banka Otomasyonu projesi.*/
#include <stdio.h>
#include <stdlib.h>
/*Prototipler*/
void Menu();
int para_yatirma(int bakiye);

/*main fonksiyonu*/
int main() {
	/*code*/
	return 0;
}
/*Projenin menusu*/
void Menu() {
	/*code*/
}


int para_yatirma(int bakiye)
{
	int yatirilan_para,dogrulama,istek;
	system ("cls");
	printf("Lutfen yatiracaginiz para miktarini giriniz ve onaylayiniz:");
	scanf("%d",&yatirilan_para);
	printf("\nParayi yatiriniz.");
	printf("Yatirdiginiz para miktarini dogrulayiniz.\n");
	printf("Yatirilan para:%d\n",yatirilan_para);
	printf("Miktar dogruysa 1 tusuna basin.\n");
	printf("Miktar yanlissa 1 dısında baska bir  tusa basin.\n");
	scanf("%d",&dogrulama);

	switch (dogrulama)
	{
	case 1:
		bakiye=bakiye+yatirilan_para;	
		break;
	case 2:
		printf("Miktari tekrar girmek icin 1 tusuna basiniz.\n");
		printf("Menuye geri donmek icin 1 dısında baska bir tusa basiniz.");
		scanf("%d",&istek);
		if (istek==1)
		{
			para_yatirma(bakiye);
		}else 
		{
			Menu();
		}
		break;

		return bakiye;
	}


}