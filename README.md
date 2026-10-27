*This project has been created as part of the 42 curriculum by jgaine.*

# ft_printf

## Description

Durant ce projet, j'ai recréé la fonction `printf` de la bibliothèque standard du C, en reproduisant son comportement pour les conversions demandées par le sujet.

J'ai appris à gérer les arguments variadiques avec `va_list`, à travailler avec plusieurs fichiers liés entre eux, à utiliser les fonctions `static` et à comprendre les différentes conversions de `printf`.

L'objectif est de créer une bibliothèque statique appelée `libftprintf.a`, contenant la fonction `ft_printf`, qui affiche du texte et retourne le nombre de caractères imprimés.

## Instructions

### Compilation

Depuis le dossier du projet, utiliser les commandes suivantes :

- `make` : compile les fichiers `.c` en `.o` et crée `libftprintf.a`.
- `make clean` : supprime les fichiers `.o`.
- `make fclean` : supprime les fichiers `.o` et `libftprintf.a`.
- `make re` : supprime les anciens fichiers et recompile la bibliothèque.

### Conversions prises en charge

- `%c` : affiche un caractère.
- `%s` : affiche une chaîne de caractères.
- `%p` : affiche l'adresse d'un pointeur en hexadécimal.
- `%d` et `%i` : affichent un entier signé.
- `%u` : affiche un entier non signé.
- `%x` : affiche un entier en hexadécimal minuscule.
- `%X` : affiche un entier en hexadécimal majuscule.
- `%%` : affiche le caractère `%`.

### Utilisation

Le prototype de la fonction est :

```c
int	ft_printf(const char *s, ...);
```

Exemple :

```c
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	r1;
	int	r2;

	r1 = ft_printf("Bonjour %% !\n");
	r2 = printf("Bonjour %% !\n");
	printf("Retour ft_printf : %d\n", r1);
	printf("Retour printf    : %d\n", r2);
	return (0);
}
```

Pour compiler un programme utilisant la bibliothèque, après avoir exécuté `make` :

```bash
cc main.c ./libftprintf.a -o programme
```

Cette commande compile `main.c`, utilise la bibliothèque `libftprintf.a` présente dans le dossier actuel et crée un exécutable nommé `programme`.

Puis lancer le programme :

```bash
./programme
```

## Algorithme et structures de données

### Fonctionnement général

La fonction `ft_printf` reçoit une chaîne de caractères et un nombre variable d'arguments.

J'utilise une variable `i` pour parcourir la chaîne caractère par caractère et une variable `count` pour compter le nombre de caractères affichés.

Tant que la chaîne n'est pas terminée :

- Si le caractère rencontré n'est pas `%`, il est affiché avec `write`, puis `i` et `count` sont incrémentés.
- Si le caractère rencontré est `%`, une fonction spécifique traite la conversion qui suit.
- La fonction de conversion récupère l'argument correspondant, l'affiche et retourne le nombre de caractères imprimés.
- Ce nombre est ajouté à `count`.

À la fin du parcours, `ft_printf` retourne `count`.

### Choix de l'algorithme et des structures de données

J'ai choisi de parcourir la chaîne caractère par caractère avec `i` pour pouvoir détecter les `%` et savoir quand appeler une fonction de conversion.

J'utilise `count` pour compter les caractères affichés, car `ft_printf` doit retourner ce nombre à la fin.

J'utilise `va_list`, `va_start`, `va_arg` et `va_end` pour gérer les arguments variadiques, car le nombre d'arguments peut changer selon les conversions utilisées.

J'ai séparé les différentes conversions dans plusieurs fonctions et fichiers `.c` pour que le code soit plus facile à lire et à comprendre.

J'utilise également des pointeurs pour permettre à certaines fonctions de modifier les variables utilisées dans le parcours de la chaîne.

Enfin, certaines fonctions sont déclarées `static`, car elles sont utilisées uniquement dans leur propre fichier.

Je n'ai pas eu besoin de créer une structure personnalisée (`struct`) : les variables, les pointeurs et `va_list` suffisent pour le fonctionnement de mon programme.

## Ressources

- `man 3 printf` : fonctionnement et conversions de `printf`.
- `man 3 stdarg` : utilisation des arguments variadiques.

### Utilisation de ChatGPT

J'ai utilisé ChatGPT pour :

- Comprendre certaines notions du langage C, notamment `va_list`, `va_arg`, les pointeurs et les fonctions `static`.
- M'aider pour la traduction en anglais.
- Corriger l'orthographe et mettre en forme mon README.