# Mini Projet C : Chiffrement et déchiffrement de messages

Bienvenue sur le projet de chiffrement et déchiffrement de messages textuels en C. Ce projet offre une solution efficace pour sécuriser vos communications par message textuel en fournissant une clé de chiffrement et de déchiffrement. La prise en charge des caractères spéciaux et des chiffres est également intégrée pour une sécurité maximale.

## Vue d'ensemble de l'application

Cette application a pour but principal de fournir un mécanisme fiable et facile à utiliser pour chiffrer et déchiffrer les messages. Que ce soit pour sécuriser la communication entre différentes parties ou pour stocker des informations de manière sécurisée, cette application est parfaitement adaptée. Elle est écrite en C, un langage populaire pour les systèmes de bas niveau en raison de ses performances et de sa flexibilité.

## Auteurs du projet

Ce projet a été élaboré par un groupe de quatre étudiants passionnés d'informatique :

- COMBEDOUZON Theo
- GHAFFAR Sami
- GUYOT Nathan
- Belmehdi Camil

Chaque membre de l'équipe a apporté ses compétences et connaissances spécifiques pour faire de ce projet une réalité.

## Structure du projet

L'organisation du projet est la suivante :

- `main.c` : Le point d'entrée de l'application qui dirige le flux du programme.
- `chiffrer.c`, `dechiffrer.c`, `verifierCode.c` : Ces fichiers contiennent les fonctionnalités de chiffrement, de déchiffrement et de vérification.
- `chiffrer.h`, `dechiffrer.h`, `verifierCode.h` : Les fichiers headers correspondant aux fichiers sources précédemment mentionnés.
- `Makefile` : Un fichier script qui facilite la compilation de l'application.

## Comment compiler le programme

Pour compiler ce programme, suivez les instructions ci-dessous :

1. Assurez-vous d'avoir le compilateur GCC installé sur votre système. Si ce n'est pas le cas, installez-le à l'aide de la commande :
   - Sur Ubuntu : `sudo apt-get install build-essential`
   - Sur Fedora : `sudo dnf install gcc`

2. Placez tous les fichiers source (".c" et ".h") dans le répertoire `src`.

3. Ouvrez un terminal et accédez au répertoire contenant le fichier `Makefile`.

4. Exécutez la commande `make`. Cette commande va compiler les fichiers source et générer l'exécutable du programme.

5. Une fois la compilation terminée, vous trouverez l'exécutable `MakeFile` dans le répertoire `bin`.

## Comment exécuter le programme

Pour démarrer l'application, veuillez suivre ces étapes :

- Ouvrez un terminal et naviguez jusqu'au répertoire où se trouve l'exécutable `MakeFile`.
- Tapez la commande `./MakeFile` pour lancer l'application.

## Comment nettoyer le répertoire de build

Une fois que vous avez terminé d'exécuter le programme, vous pouvez vouloir nettoyer le répertoire de build. Pour cela, exécutez la commande `make clean`. Cette commande supprimera tous les fichiers objets et l'exécutable génér

és lors de la compilation.

## Documentation des fonctions

Le programme comporte trois fonctions principales qui sont détaillées ci-dessous.

### Fonction : chiffrer()

```c
int chiffrer(char msg_chr, int cle);
```

Cette fonction prend un caractère et une clé de chiffrement en entrée et renvoie le caractère chiffré correspondant.

### Fonction : dechiffrer()

```c
int dechiffrer(char msg_chr, int cle);
```

Cette fonction prend un caractère chiffré et une clé de chiffrement en entrée et renvoie le caractère d'origine.

### Fonction : verifierCode()

Bien que le code source n'ait pas été fourni, d'après le code dans `main.c`, il semble que cette fonction vérifie si un caractère donné est éligible pour le chiffrement.

## Cas d'erreur

Le programme est conçu pour gérer diverses erreurs, notamment :

- Si une clé de chiffrement invalide est fournie, le programme peut ne pas se comporter comme prévu.
- Si un caractère non éligible est présent dans le message à chiffrer, la fonction `verifierCode()` pourrait renvoyer une erreur.

Pour des informations plus détaillées sur l'implémentation et l'utilisation des fonctions, veuillez vous référer au code source des fichiers correspondants.

## Où trouver le code source

Le code source de l'application peut être trouvé sur le dépôt Git suivant : [Lien à fournir]

## Mot de la fin

Nous espérons que cette application répondra à vos besoins en matière de chiffrement et de déchiffrement de messages. N'hésitez pas à nous faire part de vos commentaires et suggestions pour améliorer cette application. Nous apprécions grandement votre feedback.
