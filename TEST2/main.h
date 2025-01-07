#ifndef MAIN_H
#define MAIN_H
#define HISTORY_FILE "history.txt"
#define MAX_CMD_LENGTH 1024


extern char **environ;

/*Déclaration des fonctions fichier fonctions */
void handle_exit(void);
void execute_command(char *input);
void read_input(char **input);
int check_command_exists(char *command);
/*Déclaration des fonctions fichier history */
void add_to_history(char *command);
void clear_history(void);
/*Déclaration des fonctions fichier env */
void display_env(void);
void execute_cat(char *args[]);


#endif
