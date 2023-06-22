#include <stdio.h>
//1220505050 ABDULKADÝR KILIÇ  Örnek 2. Bir dizi içerisindeki en küçük elemaný bulan bir fonksiyon kodu:
//En küçük elemaný bulan fonksiyon tanýmladým. 
int enkucuk(int dizi[], int boyut) { // Dizi olduðunu ve dizinin kaç boyutlu olduðunu tanýmladým
    int enkucukel = dizi[0]; //dizinin en küçük elemanýný geçici olarak dizinin ilk elemanýa atadým farklý bi null deðer koymamasý için
    int i=0; // döngü oluþturdum çünkü dizi içerisindeki elemanlar arasýnda kýyaslama yapýp en küçük elemaný bulmasý için
    for (i = 1; i < boyut; i++) { // dizinin 2.elemanýndan son elemanýna kadar gidecek.
        if (dizi[i] < enkucukel) { // dizinin ikinci elamýný ilk baþta enkucukel deðiþkenine verdiðimiz dizi[0] ile dizi[1] kýyaslayacak dizi[1] paramteresi dizi[0] den küçük ise
            enkucukel = dizi[i]; // bu deðiþkene atanacak  deðil ise dizi[1] ile dizi[2] ile kýyaslanacak.
        }
    }
    return enkucukel; // fonksiyonun döndürdüðü en küçük elemandýr.
}

int main() {
    int boyut; 
    printf("Dizi boyutunu girin:"); // Kullanýcýya dizinin kaç boyutlu olacaðýný sordum
    scanf("%d", &boyut); // Kullanýcýdan dizinin boyut sayýsýný aldým.
    printf("\n\n");
    int dizi[boyut]; // Kullanýcýdan aldýðým dizi boyutunu dizimize tanýmladým
    int i=0;
    for (i = 0; i < boyut; i++) { // Kullanýcdan alacaðýmýz deðerleri döngü yardýmý ile ilk elemanýndan son elemanýna kadar almak küçük döngü kurdum
        printf("Dizinin %d. elemani:",i+1);
		scanf("%d", &dizi[i]);
    }
    int enkucukel=0; 
    enkucukel = enkucuk(dizi, boyut); //  En küçük elemaný bulmak için fonksiyonda tanýmladýým deðiþkenlere  verdiðim dizi ve boyut  bilgisini yazdým ve en küçük eleman fonksiyonunu çaðýrdým
    printf("\n\nEn kucuk eleman: %d", enkucukel); //En küçük eleman sayýsýný ekrana yazdýrdým.
    return 0;
}

