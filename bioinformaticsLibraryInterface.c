#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bioinfoc-lib.h"
#include "customIO.h"

int interfaceMenu(){
    int choice;
    
    printf("\n\n Simple Bioinformatics Library");
    printf("\n Functions:");
    printf("\n 1.) getHammingDistance");
    printf("\n 2.) countSubstrPattern");
    printf("\n 3.) isValidString");
    printf("\n 4.) getSkew");
    printf("\n 5.) getMaxSkew");
    printf("\n 6.) getMinSkew");
    printf("\n 0.) Exit");
    printf("\n\n Choice: ");
    fscanf(stdin, "%i", &choice);  
    return choice;
}

int main(){
    int choice;
    
    do{
        choice = interfaceMenu();
        
        switch(choice){
            case 1:
                hammingDistance();
                break;
            case 2:
                subPattern();
                break;
            case 3:
                validString();
                break;
            case 4:
                gcSkew();
                break;
            case 5:
                maxSkew();
                break;
            case 6:
                minSkew();
                break;
            case 0:
                return 0;
            default:
                printf("\n Wrong input!");
        }
    }while(choice!= 0);
}