#include <stdio.h>


void swap_endian(int *x){
    char* addr = (unsigned char*)x;
    char tep;

    tep = addr[0];
    addr[0] = addr[3];
    addr[3] = tep;

    tep = addr[1];
    addr[1] = addr[2];
    addr[2] = tep;
   




}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);


    return 0;
}
