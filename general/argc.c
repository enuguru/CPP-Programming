

#include <stdio.h>

void main(int argc,char *argv[])
{
    int count;
    for(count = 0; count < argc; count++)
    {
        printf("\n %s\n",argv[count]);
    }
}
