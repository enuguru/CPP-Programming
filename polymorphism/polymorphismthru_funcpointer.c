
/* here iam using an array of function pointers but
   i just need one pointer. i can also use just a single function
   pointer. but i am just using an array of function  pointers */

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
//    fptr[0] = myfuncone;
    if(strcmp(argv[1],"myfuncone") == 0)
    {
          fptr[0] = myfuncone;
          (*fptr[0])(x);
    }
    else if(strcmp(argv[1],"myfunctwo") == 0)
    {
          fptr[0] = myfunctwo;
          (*fptr[0])(x);
    }
    else
    {
          fptr[0] = myfuncthree;
          (*fptr[0])(x);
    }
    return 0;
}

void myfuncone(int x)
{
     printf("this is myfuncone called from the address in function pointer\n");
}


void myfunctwo(int x)
{
     printf("this is myfunctwo called from the address in function pointer\n");
}


void myfuncthree(int x)
{
     printf("this is myfuncthree called from the address in function pointer\n");
}

