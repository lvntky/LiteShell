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

int liteshell_cd(char **args);
int liteshell_help(char ** args);
int liteshell_exit(char **args);

