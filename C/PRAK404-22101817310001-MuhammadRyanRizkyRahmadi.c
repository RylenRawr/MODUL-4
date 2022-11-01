#include <stdio.h>
int main (void){
    float r, y, a;
    while(1){
    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan =\t");
    scanf("%f", &r);
    if(r > 5){
        printf("Input anda salah, silahkan coba lagi\n");
        continue;
    }else if (r == 5){
        printf("Terima kasih, telah menggunakan kalkulator Muhammad Ryan Rizky Rahmadi\n");
        break;
    }
    printf("Masukkan Nilai Pertama =");
    scanf("%f", &y);
    printf("Masukkan Nilai Kedua =");
    scanf("%f", &a);
    if(r == 1){
        printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n",y,a, y+a);
    }else if(r==2){
        printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n",y,a, y-a);
    }else if(r==3){
        printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n",y,a, y*a);
    }else if (r==4){
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n",y,a, y/a);

    }
    

    }
}