/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vigenere.c
 * Author: casab
 *
 * Created on 17 aprile 2020, 14:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 26
#define n 200

/*
 * Documentazione: https://docs.google.com/document/d/1vhAvkjYUuKu8WeoMCeiRiDybHGGBGW2ysUYA_U2m_FQ/edit?usp=sharing
 */

int genera(int r, int c);

int main(int argc, char** argv) {
    int m[MAX][MAX]; //matrice
    char verme[]="VERONA"; //verme
    int l; //singola lettera della frase
    int lC; //lettera criptata
    int fraseD[n]; //frase decriptata
    int r=0; //contatore righe
    int c=0; //contatore colonne
    int i=0; //contatore verme
    int j=0; //contatore
    int lV=0; //lunghezza verme
    FILE *pf;

    pf=fopen("frasi.txt","r");

    for(r=0;r<MAX;r++){
        for(c=0;c<MAX;c++){
            m[r][c]=genera(r,c);
        }
    }

    lV=strlen(verme);

    printf("\nFrase criptata: ");
    while(l!=EOF){
        l=fgetc(pf);

        if(l==32){
            lC=32;
            fraseD[j]=32;
        }
        else{
            if((l>=97) && (l<=122))
            l=l-32;

            c=l-65;
            r=verme[i]-65;

            lC=m[r][c];
            r=0;
            fraseD[j]=m[r][c];

            if(i==lV-1)
                i=0;
            else
                i++;
        }
        j++;
        if(l!=EOF)
        printf("%c",lC);
    }

    printf("\nFrase decriptata: ");
    for(int x=0;x<j-1;x++){
        printf("%c",fraseD[x]);
    }
    printf("\n");
    fclose(pf);
}

int genera(int r, int c){
    int car;
    car=r+c+65;
    if(car>90)
        car=car-26;
    return car;
}