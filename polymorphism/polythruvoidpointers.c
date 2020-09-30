
#include <stdio.h>
#include <string.h>
#include <malloc.h>

/* the strcmp function is present inside the string.h library file
   so we do not need to define it here */

void sort(void *v[], int n, int(*compare)(void *datap1, void *datap2))
{
    int i, j, count;
    void *swap;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++) {
            if ((*compare)(v[i], v[j])) {
                swap = v[i];
                v[i] = v[j];
                v[j] = swap;
            }
        }
    }
}



int CompareInts(void *datap1, void *datap2)
{
    int *intp1 = (int *)datap1;
    int *intp2 = (int *)datap2;
    if(((*intp1)-(*intp2)) >= 0)
        return 1;
    else
        return 0;
}



int main()
{
    int count;
    int  *s[4];
    char one[10] = "the";
    char two[10] = "quick";
    char three[10] = "great";
    char four[10] = "super";
    char *w[4] = { one,two,three,four };
    s[0] = (int *)malloc(sizeof(int));
    s[1] = (int *)malloc(sizeof(int));
    s[2] = (int *)malloc(sizeof(int));
    s[3] = (int *)malloc(sizeof(int));
    *(s[0]) = 7;
    *(s[1]) = 9;
    *(s[2]) = 6;
    *(s[3]) = 23;
    sort((void **)w, 4, (int(*)(void *,void *))strcmp);
    for(count = 0; count < 4; count++)
    {
        printf("\n%s\n",(char *)w[count]);
    }
    sort((void **)s, 4, (int(*)(void *,void *))CompareInts);
    for(count = 0; count < 4; count++)
    {
        printf("\n%d\n",*(s[count]));
    }
    return 0;
}
