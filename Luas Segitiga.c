/* Program Menghitung Luas Segitiga */
#include <stdio.h>

main ()
{

float alas, tinggi, luas;
printf ("Masukkan alas : ");
scanf ("%f", &alas);
printf ("Masukkan tinggi : ");
scanf ("%f", &tinggi);
luas = 0.5*alas*tinggi;
printf ("Jadi, luas segitiga adalah = %f", luas);
return(0);
}
