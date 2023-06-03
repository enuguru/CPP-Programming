
#include <stdio.h>
// declaring a variable with extern variable

extern int var;
int main(){
    // defining the extern variable
    int var=45;
    printf("%d",var);
}
