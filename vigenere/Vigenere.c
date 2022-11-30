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
 * Documentazione: https://docs.google.com/document/d/1nwdCeNdN80ngrkCx0NQxwtBi04yL5pHgZ_P2VlX-cSc/edit?usp=sharing
 */

int genera(int r, int c);
int minuscolo(int a);

int main(int argc, char** argv) {
    int m[MAX][MAX]; //matrice
    char verme[]="VERONA"; //verme
    char frase[n]; //frase da criptare o decriptare
    int r=0; //contatore righe
    int c=0; //contatore colonne
    int i=0; //contatore verme
    int lV,lF; //lunghezza verme e frase da criptare
    
    for(r=0;r<MAX;r++){
        for(c=0;c<MAX;c++){
            m[r][c]=genera(r,c);
        }
    }
    
    printf("\nInserisci frase: ");
    scanf("%s",frase);
    
    lF=strlen(frase);
    lV=strlen(verme);
    
    int fraseC[lF];
    int fraseD[lF];
    
    for(int x=0;x<lF;x++){
        frase[x]=minuscolo(frase[x]);
    }
    
    printf("\nFrase criptata: ");
    for(int j=0;j<lF;j++){
        c=frase[j]-65;
        r=verme[i]-65;
        
        fraseC[j]=m[r][c];
        r=0;
        fraseD[j]=m[r][c];
        
        if(i==lV-1)
            i=0;
        else
            i++;
        
        printf("%c",fraseC[j]);
    }
    printf("\nFrase decriptata: ");
    for(int x=0;x<lF;x++){
        printf("%c",fraseD[x]);
    }
    printf("\n");
}

int genera(int r, int c){
    int car;
    car=r+c+65;
    if(car>90)
        car=car-26;
    return car;
}

int minuscolo(int a){
    if((a>=97) && (a<=122))
        a=a-32;
    return a;
}