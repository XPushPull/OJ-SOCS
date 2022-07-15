#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

struct Family
{
    char namaAyah[31];
    char namaIbu[31];
    int jmlSaudaraKandung;
};

struct Student
{
    char kodeM[31];
    char namaM[31];
    char jenisKelaminM[31];
    Family newKeluarga;
};

struct Lecture
{
    char kode[31];
    char nama[31];
    char jenisKelamin[31];
    int jmlStudent;
    Student newStudent[101];
};

int main()
{
  Lecture newLecture[101];
  int tc; scanf("%d", &tc);
  for (int i = 0; i < tc; i++)
  {
        scanf("%s", newLecture[i].kode);
        scanf("%s", newLecture[i].nama);
        scanf("%s", newLecture[i].jenisKelamin);
        scanf("%d", &newLecture[i].jmlStudent);
        for (int j = 0; j < newLecture[i].jmlStudent; j++)
        {
          scanf("%s", newLecture[i].newStudent[j].kodeM);
          scanf("%s", newLecture[i].newStudent[j].namaM);
          scanf("%s", newLecture[i].newStudent[j].jenisKelaminM);
          scanf("%s", newLecture[i].newStudent[j].newKeluarga.namaAyah);
          scanf("%s", newLecture[i].newStudent[j].newKeluarga.namaIbu);
          scanf("%d", &newLecture[i].newStudent[j].newKeluarga.jmlSaudaraKandung);
        }
        
  }
    int index;
    scanf("%d", &index);
    int fixIndex = index - 1;
      printf("Kode Dosen: %s\n", newLecture[fixIndex].kode);
      printf("Nama Dosen: %s\n", newLecture[fixIndex].nama);
      printf("Gender Dosen: %s\n", newLecture[fixIndex].jenisKelamin);
      printf("Jumlah Mahasiswa: %d\n", newLecture[fixIndex].jmlStudent);
    for (int i = 0; i < newLecture[fixIndex].jmlStudent; i++)
    {
      printf("Kode Mahasiswa: %s\n", newLecture[fixIndex].newStudent[i].kodeM);
      printf("Nama Mahasiswa: %s\n", newLecture[fixIndex].newStudent[i].namaM);
      printf("Gender Mahasiswa: %s\n", newLecture[fixIndex].newStudent[i].jenisKelaminM);
      printf("Nama Ayah: %s\n", newLecture[fixIndex].newStudent[i].newKeluarga.namaAyah);
      printf("Nama Ibu: %s\n", newLecture[fixIndex].newStudent[i].newKeluarga.namaIbu);
      printf("Jumlah Saudara Kandung: %d\n", newLecture[fixIndex].newStudent[i].newKeluarga.jmlSaudaraKandung);
    }
}