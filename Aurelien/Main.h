#ifndef MAIN_H
#define MAIN_H

#define HISTORY_FILE "history.txt" 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_CMD_LENGTH 1024

/* Déclaration des fonctions*/
void execute_command(char *input);
void read_input(char *input);
int check_command_exists(char *command);
void handle_exit();

void add_to_history(char *command);
void clear_history();  /* Déclaration de la fonction pour effacer l'historique*/

#endif