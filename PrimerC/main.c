//
//  main.c
//  PrimerC
//
//  Created by david on 27/01/22.
//
// Proyecto subir github

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float s;
    int w=34;
    char g[20]="David Rosas";
    printf("Digita un numero flotante\n");
    scanf("%f",&s);
    printf("Has digitado %.2f te felicitamos %i , %s\n %.3f",s,w,g,s);
    return 0;
}
