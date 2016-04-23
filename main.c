#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmpfunc(const void* a, const void* b){
    return (*(char*)a - *(char*)b);
}


int main(int argc, char* argv[]){
    char* str = argv[1];
    qsort(str, strlen(str), sizeof(char), cmpfunc);
    printf("%s\n", argv[1]);

    char last_char = 0;
    int count = 0;
    for (int i = 0; i < strlen(str); i++){
        char c = str[i];
        if (last_char == c){
            count++;
        }
        else {

        }
        last_char = c;
    }

    return 0;
}
