#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

struct College {
  char name[101];
  char nim[10];
  int age;
  char postalCode[7];
  char placeOfBirth[101];
  char dateOfBirth[101];
  char highSchool[101];
  int numberOfSiblings;
  int Height;
  char bankAcc[10];
};

int main() {
  College kuliah[101];
  int tc; scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        scanf("%s", kuliah[i].name); getchar();
        scanf("%s", kuliah[i].nim); getchar();
        scanf("%d", &kuliah[i].age); getchar();
        scanf("%s", kuliah[i].postalCode); getchar();
        scanf("%s", kuliah[i].placeOfBirth);getchar();
        scanf("%s", kuliah[i].dateOfBirth); getchar();
        scanf("%[^\n]", kuliah[i].highSchool); getchar();
        scanf("%d", &kuliah[i].numberOfSiblings); getchar();
        scanf("%d", &kuliah[i].Height); getchar(); 
        scanf("%s", kuliah[i].bankAcc); getchar();

        printf("Mahasiswa ke-%d:\n", i+1);

        printf("Nama: %s\n", kuliah[i].name);
        printf("NIM: %s\n", kuliah[i].nim);
        printf("Umur: %d\n", kuliah[i].age);
        printf("Kode Pos: %s\n", kuliah[i].postalCode);
        printf("Tempat Lahir: %s\n", kuliah[i].placeOfBirth);
        printf("Tanggal Lahir: %s\n", kuliah[i].dateOfBirth);
        printf("Almamater SMA: %s\n", kuliah[i].highSchool);
        printf("Jumlah Saudara Kandung: %d\n", kuliah[i].numberOfSiblings);
        printf("Tinggi Badan: %d\n", kuliah[i].Height);
        printf("NOMOR REKENING: %s\n", kuliah[i].bankAcc);
    }
    return 0;
}