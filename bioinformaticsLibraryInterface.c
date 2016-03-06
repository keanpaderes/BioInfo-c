#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bioinfoc-lib.h"
#include "customInput.h"

int interfaceMenu(){
    int choice;
    
    printf("\n\n Simple Bioinformatics Library");
    printf("\n Functions:");
    printf("\n 1.) getHammingDistance");
    printf("\n 0.) Exit");
    printf("\n\n Choice: ");
    scanf("%i", &choice);    
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
            case 0:
                return 0;
            default:
                printf("\n Wrong input!");
        }
    }while(choice!= 0);
}