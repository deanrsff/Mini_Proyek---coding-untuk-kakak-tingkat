#include <stdio.h>
#include <string.h>

int main()
{
    int tanggalHariIni, tanggalDeadline, bulanHariIni, bulanDeadline, sisaHari;
    char namaTugas[100];

    printf("Nama Tugas: ");
    scanf("%s", namaTugas);

    printf("Tanggal berapa sekarang: ");
    scanf("%d", &tanggalHariIni);

    printf("Tanggal Deadline: ");
    scanf("%d", &tanggalDeadline);

    printf("Bulan berapa sekarang: ");
    scanf("%d", &bulanHariIni);

    printf("Bulan Deadline: ");
    scanf("%d", &bulanDeadline);

    //untuk menghitung sisa hari yang berdasarkan selisih bulan dan tanggal
    sisaHari = (bulanDeadline - bulanHariIni) * 30 + (tanggalDeadline - tanggalHariIni);

    //untuk mengecek apakah deadline masih ada waktu, atau sudah lewat
    if (sisaHari > 0) {
        printf("Tugas %s kamu masih punya waktu %d hari untuk dikerjakan.\n", namaTugas, sisaHari);
        printf("jangan menunggu mood untuk mengerjakan tugas semangat!\n");
        printf("menghitung secara mundur:\n");
        for(int i = sisaHari; i > 0; i--)
        {
            printf("sisa %d hari\n", i);
        }
    } else if (sisaHari == 0) {
        printf("Hari ini adalah deadline tugas %s jangan menunda tugas lagi ayo Kerjakan sebelum terlambat!\n", namaTugas);
    } else {
        printf("Tugas %s sudah lewat %d hari jadikan pembalajaran ya jangan sampai terlambat lagi!\n", namaTugas, -sisaHari);
    }

    return 0;
}
 