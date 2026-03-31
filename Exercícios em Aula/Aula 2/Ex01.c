//Exercício 1 Salário: Faça um programa que dado o salário bruto SB (real) de um funcionário,
//calcular o salário líquido SL (real), aplicando o desconto
#include <stdio.h>

int main()
{
    float sb,sl;
    scanf("%f",&sb);
    if (sb>=500 && sb<800){
        sl=sb-(sb*0.10);
    }
    else if(sb>=800 && sb<1000){
        sl=sb-(sb*0.15);
    }
    else if( sb>=1000){
        sl=sb-(sb*0.8);
    }
    else if (sb<500){
        sl=sb;
    }


    printf("SL= %.2f",sl);

    return 0;
}