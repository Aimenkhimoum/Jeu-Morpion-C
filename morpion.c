#include <stdio.h>
#include <stdlib.h>
#include "morpion.h"
void menu(){ /*un menu qui s'affiche et demande a l'utilisateur d'entrer un choix*/
    printf("\n");
printf("Veuillez Entrer votre choix : \n");
printf("1- Commencer une nouvelle partie \n");
printf("2- Afficher les scores \n");
printf("3- Quitter le jeu\n");
}

void player_choix(char tab[3][3],char sign){ /*une fonction qui demande aux joueurs de choisir une case pour jouer*/
       int ligne, colone ;/*deux variables pour recevior la case qu'on veut remplir */
       int ok=0 /*variable ok booleen , si l'utilisteur choisit une case vide devient 1 , si non elle reste 0 jusqu'a ce que l'utilisateur choisit une case vide */;
       if(sign=='X'){
       printf("le Joueur \033[1;32m %c \033[0m joue : (choisissez une ligne et colonne entre 0 et 2) :",sign);}
       else { printf("le Joueur \033[1;31m %c \033[0m joue : (choisissez une ligne et colonne entre 0 et 2) :",sign);}
       while(ok==0){
   scanf("%d %d",&ligne , &colone);
   if (tab[ligne][colone]!=' '){ /*si la case est deja remplie on demande a l'utilisateur de choisir une autre case */
    printf(" la case est deja remplie , veuillez choisir une autre case :\n");
   }else{
    tab[ligne][colone]=sign;
    ok=1;}
   }
   }
int verif_win(char tab[3][3] , char sig){
/*fonction qui retourne un entier winner , si les conditions pour gagner sont realisés , elle retourne 1 , si non elle retourne 0 */
   int winner=0; /*variable booleen qui devient 1 si un jouuer gagne */
   if ( (tab[0][0]==sig &&tab[1][1]==sig && tab[2][2]==sig ) || ( tab[0][2]==sig && tab[1][1]==sig && tab[2][0]==sig ) || (tab[0][0]==sig && tab[1][0]==sig && tab[2][0]==sig) || (tab[0][1]==sig && tab[1][1]==sig && tab[2][1]==sig) || (tab[0][2]==sig && tab[1][2]==sig && tab[2][2]==sig) || (tab[0][0]==sig &&tab[0][1]==sig  && tab[0][2]==sig) || (tab[1][0]==sig &&tab[1][1]==sig  && tab[1][2]==sig) || (tab[2][0]==sig &&tab[2][1]==sig  && tab[2][2]==sig)){

             winner=1;
   }
   return winner;
}
int grille_pleine(char tab[3][3]){
 /*une fonction qui retourne un entier booleen , elle verifie si la grille de notre jeu est pleine ou il reste encore des cases a remplir*/
    int i,j; /*deux variables qu'on utilise pour parcourir les cases de la grille */
    int cpt ; /*variable qui sert d'un compteur et elle compte le nombre de fois ou on trouve une case vide dans la grille */
    cpt=0;
    int pleine=0 ; /*variable booleene qui retourne devient 1 si la grille est pleine , 0 si non */
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (tab[i][j]==' '){
                cpt++;
            }
        }
    }
        if (cpt ==0){
          pleine=1;
        }
        return pleine ;
    }

    void initialiser_grille(char tab[3][3])
    { /*fonction qui initialise notre grille avec des espaces qui represente que la grille est vide */
    int i,j; /*deux variables qu'on va utiliser pour parcourir la grille*/
        for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            tab[i][j]=' ';
        }
    }}

void afficherGrille(char tab[3][3]) {
 /*une fonction qui affiche la grille */
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
                if(tab[i][j]=='X'){
                 /* si il trouve un X il l'affiche avec le vert */
             printf("\033[1;32m %c \033[0m", tab[i][j]);}
             else {/*si non il trouve le O qu'on l'affiche avec rouge*/
             printf("\033[1;31m %c \033[0m", tab[i][j]);}
            if (j < 2) printf("|");
        } /*des conditions pour afficher une grille classique qu'on a tout le temps dessiner qu'on on joue morpion*/
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}
