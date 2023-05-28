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
*  Nom du fichier : dechiffrer.c                                                          *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dechiffrer.h"
 
int dechiffrer(char msg_chr, int cle){

    //Décoder les minuscules
    if (msg_chr >= 'a' && msg_chr <= 'z'){
        if ((msg_chr - (cle%26)) < 'a'){
            return 'z' - msg_chr - (cle%26) + ('a'+1);
        } else {
            return msg_chr - (cle%26);
        }

    }

    //Décoder les majuscules 
    if (msg_chr >= 'A' && msg_chr <= 'Z'){
        if ((msg_chr - (cle%26)) < 'A'){
            return 'Z' - msg_chr - (cle%26) + ('A'+ 1);
        } else {
            return msg_chr - (cle%26);
        }

    }

    //Décoder les chiffres
	if (msg_chr >= '0' && msg_chr <= '9'){
		if ((msg_chr - (cle%10)) < '0'){
			return '0' - msg_chr -(cle%10) + ('9'+1);
		} else {
			return msg_chr - (cle%10);
		}
	} 

    //Encoder les espaces 
	if (msg_chr == 32) {
		return 32;
	} 

}
