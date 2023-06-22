#include <stdio.h>
//1220505050 ABDULKAD�R KILI�  �rnek 2. Bir dizi i�erisindeki en k���k eleman� bulan bir fonksiyon kodu:
//En k���k eleman� bulan fonksiyon tan�mlad�m. 
int enkucuk(int dizi[], int boyut) { // Dizi oldu�unu ve dizinin ka� boyutlu oldu�unu tan�mlad�m
    int enkucukel = dizi[0]; //dizinin en k���k eleman�n� ge�ici olarak dizinin ilk eleman�a atad�m farkl� bi null de�er koymamas� i�in
    int i=0; // d�ng� olu�turdum ��nk� dizi i�erisindeki elemanlar aras�nda k�yaslama yap�p en k���k eleman� bulmas� i�in
    for (i = 1; i < boyut; i++) { // dizinin 2.eleman�ndan son eleman�na kadar gidecek.
        if (dizi[i] < enkucukel) { // dizinin ikinci elam�n� ilk ba�ta enkucukel de�i�kenine verdi�imiz dizi[0] ile dizi[1] k�yaslayacak dizi[1] paramteresi dizi[0] den k���k ise
            enkucukel = dizi[i]; // bu de�i�kene atanacak  de�il ise dizi[1] ile dizi[2] ile k�yaslanacak.
        }
    }
    return enkucukel; // fonksiyonun d�nd�rd��� en k���k elemand�r.
}

int main() {
    int boyut; 
    printf("Dizi boyutunu girin:"); // Kullan�c�ya dizinin ka� boyutlu olaca��n� sordum
    scanf("%d", &boyut); // Kullan�c�dan dizinin boyut say�s�n� ald�m.
    printf("\n\n");
    int dizi[boyut]; // Kullan�c�dan ald���m dizi boyutunu dizimize tan�mlad�m
    int i=0;
    for (i = 0; i < boyut; i++) { // Kullan�cdan alaca��m�z de�erleri d�ng� yard�m� ile ilk eleman�ndan son eleman�na kadar almak k���k d�ng� kurdum
        printf("Dizinin %d. elemani:",i+1);
		scanf("%d", &dizi[i]);
    }
    int enkucukel=0; 
    enkucukel = enkucuk(dizi, boyut); //  En k���k eleman� bulmak i�in fonksiyonda tan�mlad��m de�i�kenlere  verdi�im dizi ve boyut  bilgisini yazd�m ve en k���k eleman fonksiyonunu �a��rd�m
    printf("\n\nEn kucuk eleman: %d", enkucukel); //En k���k eleman say�s�n� ekrana yazd�rd�m.
    return 0;
}

