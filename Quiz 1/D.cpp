#include<stdio.h>
int main(){
    char nim[12];
    char nama[102];
    char kelas;
    int absen;

    scanf("%s %[^\n] %c %d", &nim, &nama, &kelas, &absen);

    printf("Id    : %s\n", nim);
    printf("Name  : %s\n", nama);
    printf("Class : %c\n", kelas);
    printf("Num   : %d\n", absen);

    return 0;
}