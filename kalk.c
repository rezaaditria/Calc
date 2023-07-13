// calculator ᵇʸ ᴿᴱᶻ

#include <stdio.h>
#include <stdlib.h>
int F, S, R;

int main()
{
    int i;
    system("cls");
    printf("================MAIN MENU================\n");
    printf("        1.      pertambahan  (+)\n");
    printf("        2.      pengurangan  (-)\n");
    printf("        3.      perkalian    (*)\n");
    printf("        4.      pengurangan  (/)\n");
    printf("_________________________________________\n");
    printf("                Pilih menu:\n\t\t");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        system("cls");
        printf("         (+)  pertambahan  (+)\n");
        printf("         masukan angka pertama:\n\t\t");
        scanf("%d", &F);
        printf("         masukan angka kedua:\n\t\t");
        scanf("%d", &S);
        system("cls");
        R = F + S;
        printf("            Hasil Operasi\n");
        printf("              %d + %d = %d", F, S, R);
        break;

    case 2:
        system("cls");
        printf("         (-)  pengurangan  (-)\n");
        printf("         masukan angka pertama:\n\t\t");
        scanf("%d", &F);
        printf("         masukan angka kedua:\n\t\t");
        scanf("%d", &S);
        system("cls");
        R = F - S;
        printf("            Hasil Operasi\n");
        printf("              %d - %d = %d", F, S, R);
        break;
    case 3:
        system("cls");
        printf("         (*)  perkalian  (*)\n");
        printf("         masukan angka pertama:\n\t\t");
        scanf("%d", &F);
        printf("         masukan angka kedua:\n\t\t");
        scanf("%d", &S);
        system("cls");
        R = F * S;
        printf("            Hasil Operasi\n");
        printf("              %d * %d = %d", F, S, R);
        break;

    case 4:
        system("cls");
        printf("         (/)  pembagian  (/)\n");
        printf("         masukan angka pertama:\n\t\t");
        scanf("%d", &F);
        printf("         masukan angka kedua:\n\t\t");
        scanf("%d", &S);
        system("cls");
        R = F / S;
        printf("            Hasil Operasi\n");
        printf("              %d / %d = %d", F, S, R);
        break;

    default:
        system("cls");
        printf("Invalid option\n");
        system("pause");
        main();
    }
}
