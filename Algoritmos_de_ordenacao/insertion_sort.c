#include <stdio.h>
#define TAM 5

void insertionSort(int a[]){
    int chave, i, j;
    for(i = 1; i<TAM ;i++){
        chave = a[i];
        j = i - 1;
         while( (j>=0) && (chave < a[j]) ){
             a[j+1] = a[j];
             j--;
         }
        a[j+1] = chave;
    }
}

int main() {
    
    int v[] = {33, 22, 67, 10, 2};
    for(int x = 0; x<TAM ;x++){
        printf(" %d", v[x]);
    }
    
    insertionSort(v);
    
     for(int x = 0; x<TAM ;x++){
        printf(" %d", v[x]);
    }
    return 0;
}