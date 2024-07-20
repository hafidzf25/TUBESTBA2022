#include <stdio.h>
#include <string.h>

int main()

{
    system("cls");
    printf("================================================\n");
    printf("= Mesin turing dengan L = 0^n 1^n || n >= 1\n");
    printf("================================================\n");
    printf("= Masukkan string = ");

    int i, j, indeks = 0, spasi = 1;
    char string[100];
    char kiri_atas = 201, atasbawah_tengah = 205, kanan_atas = 187, kirikanan_tengah = 186, kiri_bawah = 200, kanan_bawah = 188, atas_sambung = 203, bawah_sambung = 202;

    scanf("%s",&string);
    printf("================================================\n");
    char string_baru[100];
    
    for (i = 0; i <= strlen(string)+1; i++)
    {
        if (i == 0)
        {
            string_baru[i] = '$';
        }
        else if ( i == strlen(string)+1)
        {
            string_baru[i] = '_';
            indeks++;
        }
        else
        {
            string_baru[i] = string[indeks];
            indeks++;
        }
    }

    char string_cadang[100];

    strcpy(string_cadang, string_baru);

    indeks++;

    // for (j = 0; j < indeks; j++)
    //     {
    //         if (j == 0)
    //         {
    //             printf("%c%c%c",kiri_atas,atasbawah_tengah,atas_sambung);
    //         }
    //         else if (j < indeks-1)
    //         {
    //             printf("%c%c",atasbawah_tengah,atas_sambung);
    //         }
    //         else if (j == indeks-1)
    //         {
    //             printf("%c%c",atasbawah_tengah,kanan_atas);
    //         }
    //     }
    //     printf("\n");
        
    //     for (j = 0; j < indeks; j++)
    //     {
    //         printf("%c%c",kirikanan_tengah,string_baru[j]);
    //         if (j == indeks-1)
    //         {
    //             printf("%c", kirikanan_tengah);
    //         }
    //     }
    //     printf("\n");
    //     for (j = 0; j < indeks; j++)
    //     {
    //         if (j == 0)
    //         {
    //             printf("%c%c%c",kiri_bawah,atasbawah_tengah,bawah_sambung);
    //         }
    //         else if (j < indeks-1)
    //         {
    //             printf("%c%c",atasbawah_tengah,bawah_sambung);
    //         }
    //         else if (j == indeks-1)
    //         {
    //             printf("%c%c",atasbawah_tengah,kanan_bawah);
    //         }
    //     }
    //     printf("\n");

    int ind = 0, q = 0, pola = 0;

    i = 0;
    do
    {
        if (pola >= 0)
        {
            for (j = 0; j < indeks; j++)
            {
                if (j == 0)
                {
                    printf("%c%c%c",kiri_atas,atasbawah_tengah,atas_sambung);
                }
                else if (j < indeks-1)
                {
                    printf("%c%c",atasbawah_tengah,atas_sambung);
                }   
                else if (j == indeks-1)
                {
                    printf("%c%c",atasbawah_tengah,kanan_atas);
                }
            }
            printf("\n");
        
            for (j = 0; j < indeks; j++)
            {
                printf("%c%c",kirikanan_tengah,string_baru[j]);
                if (j == indeks-1)
                {
                    printf("%c", kirikanan_tengah);
                }
            }
            printf("\n");
            for (j = 0; j < indeks; j++)
            {
                if (j == 0)
                {
                    printf("%c%c%c",kiri_bawah,atasbawah_tengah,bawah_sambung);
                }
                else if (j < indeks-1)
                {
                    printf("%c%c",atasbawah_tengah,bawah_sambung);
                }
                else if (j == indeks-1)
                {
                    printf("%c%c",atasbawah_tengah,kanan_bawah);
                }
            }
            printf("\n");
            for (j = 0; j < spasi; j++)
            {
                printf(" ");
            }
            printf("^\n");
            for (j = 0; j < spasi; j++)
            {
                printf(" ");
            }
            printf("q%d\n\n",q);
        }
        
        if (string_baru[0] == '$')
        {
            if (q == 0)
            {
                i++;
                spasi+=2;
                q = 1;
            }
            else if (q == 1)
            {
                if (string_baru[i] == '0')
                {
                    string_baru[i] = 'x';
                    i++;
                    spasi+=2;
                    q = 2;
                }
                else if (string_baru[i] == 'y')
                {
                    string_baru[i] = 'y';
                    i++;
                    spasi+=2;
                    q = 4;
                }
                else
                {
                    q = 6;
                }
            }
            else if (q == 2)
            {
                if (string_baru[i] == '0')
                {
                    string_baru[i] = '0';
                    i++;
                    spasi+=2;
                }
                else if (string_baru[i] == '1')
                {
                    string_baru[i] = 'y';
                    i--;
                    spasi-=2;
                    q = 3;
                }
                else if (string_baru[i] == 'y')
                {
                    string_baru[i] = 'y';
                    i++;
                    spasi+=2;
                }
                else
                {
                    q = 6;
                }
            }
            else if (q == 3)
            {
                if (string_baru[i] == '0')
                {
                    string_baru[i] = '0';
                    i--;
                    spasi-=2;
                }
                else if (string_baru[i] == 'y')
                {
                    string_baru[i] = 'y';
                    i--;
                    spasi-=2;
                }
                else if (string_baru[i] == 'x')
                {
                    string_baru[i] = 'x';
                    i++;
                    spasi+=2;
                    q = 1;
                }
                else
                {
                    q = 6;
                }
            }
            else if (q == 4)
            {
                if (string_baru[i] == 'y')
                {
                    string_baru[i] = 'y';
                    i++;
                    spasi+=2;
                }
                else if (string_baru[i] == '_')
                {
                    string_baru[i] = '_';
                    q = 5;
                    i--;
                    spasi-=2;
                }
                else
                {
                    q = 6;
                }
            }
        }
        pola++;  
    } while ((q != 6) && (q != 5));

    if (q == 5)
    {
        printf("======================================\n");
        printf("= String %s diterima\n", string);
        printf("======================================\n");
    }
    else if ( q == 6 )
    {
        printf("======================================\n");
        printf("= String %s ditolak\n", string);
        printf("======================================\n");
    }
    system("pause");

    return 0;
}
