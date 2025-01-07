#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>

/* Fonction pour afficher les variables d'environnement */
void display_env(void) 
{
	char *getenv (const char *name);
char *env = getenv("PATH");
if (env != NULL) {
	printf("%s\n", env);  /* Affiche les variables d'environnement PATH*/
} else {
	perror("Erreur d'affichage de l'environnement");
}

/* Fonction pour exécuter la commande 'cat' */
void execute_cat(char *args[]) {
if (args[1] == NULL) {  // Si aucun fichier n'est donné
	fprintf(stderr, "Usage: cat <fichier1> <fichier2> ...\n");
	return;
}

for (int i = 1; args[i] != NULL; i++) {  // Parcours des fichiers à afficher
	int fd = open(args[i], O_RDONLY);  // Ouvre le fichier en mode lecture
	if (fd == -1) {
		perror("Erreur lors de l'ouverture du fichier");
		continue;  // Si l'ouverture échoue, on passe au fichier suivant
	}

	char buffer[256];  // Tampon pour lire le fichier
	ssize_t bytesRead;

	// Lire et afficher le contenu du fichier
	while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0) {
		write(STDOUT_FILENO, buffer, bytesRead);  // Afficher le contenu dans stdout
	}

	close(fd);  // Fermer le fichier
}
}
}
