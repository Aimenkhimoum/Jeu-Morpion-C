#ifndef _MORPIONTAB_
#define _MORPIONTAB_
int verif_win(char tab[3][3] , char sig);
void menu();
void afficherGrille(char tab[3][3]);
int grille_pleine(char tab[3][3]);
void initialiser_grille(char tab[3][3]);
void player_choix(char tab[3][3],char sign);
#endif 
