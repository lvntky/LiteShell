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

//Function Declarations for builtin shell comands

int lsh_cd(char **args);
int lsh_help(char ** args);
int lsh_exit(char **args);

