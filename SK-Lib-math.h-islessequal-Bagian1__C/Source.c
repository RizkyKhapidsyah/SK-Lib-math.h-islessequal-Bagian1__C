#include <stdio.h>      /* printf */
#include <math.h>       /* islessequal, log */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double hasil;
    hasil = log(10.0);

    if (islessequal(hasil, 0.0)) {
        printf("log(10.0) is not positive");
    } else {
        printf("log(10.0) is positive");
    }
        
    _getch();
    return 0;
}