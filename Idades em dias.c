#include <stdio.h>

int main(){

    int dias, mes, ano;

    scanf("%d", &dias);

    ano = dias/365;
    mes = (dias%365)/30;
    dias = (dias%365)%30;


    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
} 
