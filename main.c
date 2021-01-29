#include <stdio.h>
#include <conio.h>
int main()
{
int taban, yukseklik;
float alan;

printf("Ucgenin Tabani=");
scanf("%d",&taban);
printf("Ucgenin Yuksekligi=");
scanf("%d",&yukseklik);
alan=(taban*yukseklik)/2.0;
printf("nn Ucgenin Alani = %.2f ",alan);

getch();
return 0;
}
