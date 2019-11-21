#include <stdio.h>

int main ()
{
    //memilih pilihan dari menu
    int pilihan;
    printf("Menu:\n");
    printf("1. Nasi Goreng\n");
    printf("2. Bakso\n");
    printf("3. Mie Ayam\n");
    printf("pilihan");
    scanf("%d", &pilihan);

    //akan tampil pilihan yang dipilih user
    switch (pilihan)
    {
        case 1:
            printf("Anda memilih nasi goreng\n");
            break;
        case 2:
            printf("Anda memilih Bakso\n");
            break;
        case 3:
            printf("Anda memilih Mie Ayam\n");
            break;
        default:
            printf("pilihan yang anda pilih tidak terdaftar pada menu");
            break;
    }



    return 0;

}
