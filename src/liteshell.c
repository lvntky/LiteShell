/************************ 
 *File: liteshell.c     * 
 *Author: Levent KAYA   *
 *Date: 17.07.2019      *
 *Brief: LSH(Lite Shell)*
 ************************/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "include/image_print.h"
#define MAX_LEN 128

//Function Declarations for builtin shell comands

int liteshell_cd(char **args);
int liteshell_help(char ** args);
int liteshell_exit(char **args);

// Function that prints the logo

//void printImage(FILE *fptr);

int main(){

    char *filename = "image.txt";
    FILE *fptr = NULL;

    if((fptr = fopen(filename, "r")) == NULL){
        fprintf(stderr, "Error while opening %s", filename);
    }

    printImage(fptr);
    fclose(fptr);

    return 0;
}

