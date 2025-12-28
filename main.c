#include <stdio.h>
#include <string.h>

// 1. Mendefinisikan Struct
// Struct ini bertindak sebagai "cetakan" atau tipe data baru
struct Mahasiswa {
    char nama[50];
    char nim[20];
    float ipk;
    char jurusan[30];
};

int main() {
    // 2. Deklarasi variabel menggunakan tipe struct Mahasiswa
    struct Mahasiswa mhs1;
    struct Mahasiswa mhs2;

    // 3. Mengisi data ke dalam mhs1
    // Kita menggunakan fungsi strcpy untuk menyalin string ke array karakter
    strcpy(mhs1.nama, "Budi Santoso");
    strcpy(mhs1.nim, "230050123");
    strcpy(mhs1.jurusan, "Teknik Informatika");
    mhs1.ipk = 3.85; // Untuk angka bisa langsung di-assign

    // Mengisi data ke dalam mhs2
    strcpy(mhs2.nama, "Siti Aminah");
    strcpy(mhs2.nim, "230050124");
    strcpy(mhs2.jurusan, "Sistem Informasi");
    mhs2.ipk = 3.90;

    // 4. Mengakses dan Menampilkan data dari struct
    printf("=== Data Mahasiswa 1 ===\n");
    printf("Nama    : %s\n", mhs1.nama);
    printf("NIM     : %s\n", mhs1.nim);
    printf("Jurusan : %s\n", mhs1.jurusan);
    printf("IPK     : %.2f\n\n", mhs1.ipk);

    printf("=== Data Mahasiswa 2 ===\n");
    printf("Nama    : %s\n", mhs2.nama);
    printf("NIM     : %s\n", mhs2.nim);
    printf("Jurusan : %s\n", mhs2.jurusan);
    printf("IPK     : %.2f\n", mhs2.ipk);

    return 0;
}