
/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de message                                                                *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : COMBEDOUZON Theo                                                              *
*                                                                             *
*  Nom-prénom2 : GHAFFAR Sami                                                            *
*                                                                             *
*  Nom-prénom3 : GUYOT Nathan                                                              *
*                                                                             *
*  Nom-prénom4 : Belmehdi Camil                                                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : convertirAccents.c                                                          *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#define TAILLE_MAX 255

int convertirAccents(wchar_t message){

	wchar_t accent[] = L"éèëêàäâïîöôùüûçÀÄÂÉÈËÊÇÖÔÏÎ";
	wchar_t remplacement[] = L"eeeeaaaiioouuucAAAEEEECOOII";
	for(int j = 0; j < TAILLE_MAX; j++){
		if(message == accent[j]){
			return message = remplacement[j];
		}
	}
	return 0;
}

void main() {
	wchar_t message[TAILLE_MAX];
    wprintf(L"Entrer le mot ou la phrase a crypter : ");
    fgetws(message,TAILLE_MAX,stdin);

	wchar_t msg_chr[TAILLE_MAX];
    for (int i= 0; i < TAILLE_MAX; i++) {
    	msg_chr[i] = convertirAccents(message[i]);
    }
	wprintf(L"%ls",msg_chr);
}