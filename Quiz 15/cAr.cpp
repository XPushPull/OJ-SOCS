#include <stdio.h>

struct Fam
{
    char Dad[40];
    char Mom[40];
    int TotSiblings;
};

struct Colleges
{
    char kodeM[40];
    char namaM[40];
    char jenisKelaminM[40];
    Fam newFam;
};

struct Lector
{
    char kode[40];
    char nama[40];
    char jenisKelamin[40];
    int totColleges;
    Colleges newColleges[101];
};


int main()
{
    Lector newLector[101];
    int tc; scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        scanf("%s", newLector[i].kode);
        scanf("%s", newLector[i].nama);
        scanf("%s", newLector[i].jenisKelamin);
        scanf("%d", &newLector[i].totColleges);
        for (int j = 0; j < newLector[i].totColleges; j++)
        {
            scanf("%s", newLector[i].newColleges[j].kodeM);
            scanf("%s", newLector[i].newColleges[j].namaM);
            scanf("%s", newLector[i].newColleges[j].jenisKelaminM);
            scanf("%s", newLector[i].newColleges[j].newFam.Dad);
            scanf("%s", newLector[i].newColleges[j].newFam.Mom);
            scanf("%d", &newLector[i].newColleges[j].newFam.TotSiblings);
        }
    }
    int index; scanf("%d", &index);
    int validIndex = index - 1;
    printf("Kode Lector: %s\n", newLector[validIndex].kode);
    printf("Nama Lector: %s\n", newLector[validIndex].nama);
    printf("Gender Lector: %s\n", newLector[validIndex].jenisKelamin);
    printf("Jumlah Colleges: %d\n", newLector[validIndex].totColleges);
    for (int i = 0; i < newLector[validIndex].totColleges; i++)
    {
        printf("Kode Colleges: %s\n", newLector[validIndex].newColleges[i].kodeM);
        printf("Nama Colleges: %s\n", newLector[validIndex].newColleges[i].namaM);
        printf("Gender Colleges: %s\n", newLector[validIndex].newColleges[i].jenisKelaminM);
        printf("Nama Ayah: %s\n", newLector[validIndex].newColleges[i].newFam.Dad);
        printf("Nama Ibu: %s\n", newLector[validIndex].newColleges[i].newFam.Mom);
        printf("Jumlah Saudara Kandung: %d\n", newLector[validIndex].newColleges[i].newFam.TotSiblings);
    }
    return 0;
}
