#ifndef IMAGEPRINT_H
#define IMAGEPRINT_H

#define MAX_LEN 128

void printImage(FILE *fptr){
    char readString[MAX_LEN];
    while(fgets(readString, sizeof(readString), fptr) != NULL){
        printf("%s", readString);
    }
}

#endif