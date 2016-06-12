#include <stdio.h>
volatile int procCounter = 0;
volatile int *lock = (int *) 100*1024*1024;

void AcquireLock() {
  while (*lock);
}

void ReleaseLock() {

  *lock = 0;
}

void RecursiveHello( int n, int procNumber) {
	if (n) {

	printf("Hi from processor MipsProcc%d!\n", procNumber);
	RecursiveHello(n - 1, procNumber);
	}

}

int main()
{
	int procNumber;
    // O endereco atribuido ao ponteiro do periferico deve ser maior que o o limite da memória.
    //int base_p = 100*1024*1024+5 ;
    //int * pont = (int*) base_p;
    //int i = 0, test;
    
    AcquireLock();
    procNumber = procCounter;
    procCounter ++;
    ReleaseLock();

    if(procNumber % 2) {
    	for (i = 0; i < 100000; i ++);
    }

    RecursiveHello(10, procNumber);
    exit(0);
    return 0;


}

