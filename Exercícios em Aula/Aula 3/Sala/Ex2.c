#include <stdio.h>
int main(){
    int ano;
    double sal=1000;
    float perc=0.001;

    for(ano=1996;ano<=2026;ano++){
        sal= (sal*perc)+sal;
        perc= perc*2;

    }
    printf("Salario atual: %.2lf",sal);


}