#include<stdio.h>

main()
{
    printf("Hello World");
    
    // O endereco atribuido ao ponteiro do periferico deve ser maior que o o limite da memória.
    int base_p = 100*1024*1024+5 ;
    int * pont = (int*) base_p;
    int i = 0, test;
    
    *pont = 9;

    for(i=0; i<20;i++) test = *pont;
    


}

