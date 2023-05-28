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
*  Nom du fichier : main.c                                                          *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chiffrer.h"
#include "dechiffrer.h"
#include "verifierCode.h"
#define TAILLE_MAX 255


void main() {

		// Demande à l'utilisateur d'entrer le message à crypter
		char message[TAILLE_MAX];
		printf("Entrer le mot ou la phrase à crypter : ");
		scanf("%[^\n]", message);

		// Demande à l'utilisateur d'entrer la clé de chiffrement
		int cle = 0;
		printf("Entrer la clé : ");
		scanf("%d", &cle);

		// Vérification du code
		int curseur = 0;
		int verif = 1;
		while (curseur < strlen(message) && verif == 1) {
			verif = verifierCode(message[curseur]);
			if (verif == 0) {
				printf("Veuillez entrer une chaîne de caractères valide.\n");
				printf("Entrer le mot ou la phrase à crypter : ");
				scanf("%s", message);
			}
			curseur = curseur + 1;
		}

		// Cryptage du message
		char msg_chr[TAILLE_MAX];
		for (int i = 0; i < strlen(message); i++) {
			msg_chr[i] = chiffrer(message[i], cle);
		}
		printf("Voici le message crypté : %s\n", msg_chr);

		// Décryptage du message
		char msg_dchr[TAILLE_MAX];
		for (int i = 0; i < strlen(message); i++) {
			msg_dchr[i] = dechiffrer(msg_chr[i], cle);
		}
		printf("Voici le message de nouveau décrypté : %s\n", msg_dchr);
	}
