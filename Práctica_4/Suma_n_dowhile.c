#include <stdio.h>

int main () {

int Num, Total, i;
printf("Escribe cuantos números quieres sumar: ");
scanf("%d", &Num); 
Total = 0;
i = 1;
if (Num >= 1) {
    do {
        Total = Total + i;
        i++;
    } while (i <= Num);
    printf("La suma es: %d \n", Total);
} else {
printf("El número ha de ser mayor o igual a 1");
    }
return 0;
}