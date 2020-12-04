#include <stdio.h>
//Author : Gede Rico Wijaya - 2005551091

/*
Membuat program untuk menghasilkan output :
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

//Deklarasi Variabel untuk menghasil output angka berbentuk segitiga siku-siku
//Variabel angka = untuk menyimpan nilai angka yang diinginkan pada puncak segitiga 
//Variabel baris = untuk meniympan banyak baris yang ada pada soal
//Variabel i     = untuk menyimpan angka pada outer loop
//Variabel j     = untuk menyimpan angka pada inner loop

int angka;
int baris;
int i,j;

int main (){
    //Judul
    printf ("=================================\n");
    printf ("Menampilkan Segitiga Siku - siku \n");
    printf ("=================================\n");

    //Instruksi untuk menginput nilai puncak dari segitiga
    printf ("Ketik angka untuk menjadi puncak dari segitiga: ");
    scanf  ("%d", &angka);
    printf ("Ketik banyak baris yang diinginkan: ");
    scanf  ("%d", &baris);

    //Hasil Output
    printf ("Maka hasil dari input anda akan menggambarkan : \n");
    for (i = 1; i <= baris; i++){
        for ( j = 1 ; j <= i; j++){
            printf ("[%d] [0]", angka);
        } 
        //untuk memisahkan angka agar bisa terbentuknya segitiga dengan membuat new line.
    }
    return 0;
}




