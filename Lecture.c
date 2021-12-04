//Ecrire une fonction qui lit les fichiers d’input et cree une matrice creuse et
//un vecteur creux correspondant

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mmio.h"

int main(){

    FILE *fp;
    char * line = NULL;
    size_t len = 0;
    size_t read;
    int int1, int2, int3;
    //MM_typecode matcode;

    fp = fopen("/Data/stp3d.a.mtx", "r");
    printf("Found \n");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    //if ( mm_read_banner(fp, &matcode) == 0 )  //determine the type of matrix being represented in a Matrix Market file
    //    printf("SUCESS")




}


