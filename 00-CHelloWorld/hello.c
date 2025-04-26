#include <stdio.h>

void printAStdout(char* str){
    printf("%s", str);
}

void printAOutputFile(char* str, FILE* file){
    fopen_s(&file, "output.txt", "w");
    fprintf(file, "%s", str);
}

int main(){
    printf("Corriendo version de C: %ld\n", __STDC_VERSION__);
    printAStdout("Hello World!\n");
    FILE* outputFile;
    printAOutputFile("Hello World!\n", outputFile);
    return 0;
}

