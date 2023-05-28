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
*  Nom du fichier : chiffrer.c                                                          *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chiffrer.h"

int chiffrer(char msg_clair, int cle){
	
	//Encoder les minuscules
	if (msg_clair >= 'a' && msg_clair <= 'z'){
		if ((msg_clair + (cle%26)) > 'z'){
			return 'a' + msg_clair + (cle%26) - ('z'+1);
		} else {
			return msg_clair + (cle%26);
		}
			
	}

	//Encoder les majuscules 
	if (msg_clair >= 'A' && msg_clair <= 'Z'){
		if ((msg_clair + (cle%26)) > 'Z'){
			return 'A' + msg_clair + (cle%26) - ('Z'+1);
		} else {
			return msg_clair + (cle%26);
		}
			
	}

	//Encoder les chiffres
	if (msg_clair >= '0' && msg_clair <= '9'){
		if ((msg_clair + (cle%10)) > '9'){
			return '0' + msg_clair+(cle%10) - ('9'+1);
		} else {
			return msg_clair+(cle%10);
		}
	} 

	//Encoder les espaces 
	if (msg_clair == 32) {
		return 32;
	} 

	return 0;
}