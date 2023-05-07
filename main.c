#include<stdio.h>

int main(void){

    int partIP1, partIP2, partIP3, partIP4;
    unsigned long IP32bits;
    
    IP32bits = 0;
    
    scanf("%d", &partIP1);
    scanf("%d", &partIP2);
    scanf("%d", &partIP3);
    scanf("%d", &partIP4);
    
    if(partIP1 >= 0 && partIP1 <= 255 &&
       partIP2 >= 0 && partIP2 <= 255 &&
       partIP3 >= 0 && partIP3 <= 255 &&
       partIP4 >= 0 && partIP4 <= 255){
           
            IP32bits += (unsigned long) partIP1 * 256 * 256 * 256;
            IP32bits += (unsigned long) partIP2 * 256 * 256;
            IP32bits += (unsigned long) partIP3 * 256;
            IP32bits += (unsigned long) partIP4;
            
            printf("Su IP en IPv4 es: %d.%d.%d.%d\n", partIP1, partIP2, partIP3, partIP4);
            printf("Su IP en 32bits es: %lu\n", IP32bits);
    
       }else{
           puts("IP no valida");
       }
    return 0;
}