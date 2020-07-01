#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s, int i1, int i2) {
    char *temp;
    temp = s[i1];
    s[i1] = s[i2];
    s[i2] = temp;
}

void reverse(char **s, int i1, int size) {
    int i1_cpy, size_cpy;
    i1_cpy = i1;
    size_cpy = size;
    while (i1_cpy < (size_cpy-1)) {
        swap(s, i1_cpy, (size_cpy-1));
        i1_cpy++;
        size_cpy--;
    }
}

int next_permutation(int n, char **s)
{
    int i;
    int index_k=-1;
    int index_l=-1;
    int j=0;
    for (i=0;i<n-1;i++) {
        if (strcmp(s[i],s[i+1])<0) {
            index_k = i;
        }
    }
    if (index_k==-1) { return 0; }
    for (i=index_k;i<n;i++) {
        if (strcmp(s[index_k],s[i])<0) {
            index_l = i;
        }
    }
    swap(s, index_k, index_l);
    reverse(s, index_k+1, n);
    return 1;  
}

int main()
