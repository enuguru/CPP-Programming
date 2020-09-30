
#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
    int x;
    void myfuncone(int);
    void myfunctwo(int);
    void myfuncthree(int);
    void (*fptr[3])(int);
    x = 56;
          fptr[1] = myfuncone;
          fptr[2] = myfuncone;
          fptr[3] = myfuncone;
          (*fptr[0])(x);
          (*fptr[1])(x);
          (*fptr[2])(x);
    return 0;
}

void myfuncone(int x)
{
     printf("this first function is called from the index 1 of array of function pointers\n");
}


void myfunctwo(int x)
{
     printf("this second function is called from the index 2 of array of function pointers\n");
}


void myfuncthree(int x)
{
     printf("this thrid function is called from the index 3 of array of function pointers\n");
}

